#include <stdio.h>

int brace, brack, paren;

void in_quote(int c);
void in_comment(void);
void search(int c);

/* rudimentary syntax checker for C program */
int main() {
    int c;
    extern int brace, brack, paren;

    while ((c = getchar()) != EOF) {
        if (c == '/') {
            if ((c = getchar()) == '*')
                in_comment(); /* inside comment */
            else
                search(c);
        } else if (c == '\'' || c == '"')
            in_quote(c); /* inside quote */
        else
            search(c);

        if (brace < 0) { /* output errors */
            printf("Unbalanced braces\n");
            brace = 0;
        } else if (brack < 0) {
            printf("Unbalanced brackets\n");
            brack = 0;
        } else if (paren < 0) {
            printf("Unbalanced parentheses\n");
            paren = 0;
        }
    }
    if (brace > 0) /* output errors */
        printf("Unbalanced braces\n");
    if (brack > 0)
        printf("Unbalanced brackets\n");
    if (paren > 0)
        printf("Unbalanced parentheses\n");

    return 0;
}

/* in_quote: inside quote */
void in_quote(int c) {
    int d;

    while ((d = getchar()) != c) /* search end quote */
        if (d == '\\')
            getchar(); /* ignore escape seq */
}

/* in_comment: inside of a valid comment */
void in_comment(void) {
    int c, d;

    c = getchar();                 /* pre character */
    d = getchar();                 /* curr character */
    while (c != '*' || d != '/') { /* search for end */
        c = d;
        d = getchar();
    }
}

/* serach: search for rudimentary syhtax errors */
void search(int c) {
    extern int brace, brack, paren;

    if (c == '{')
        ++brace;
    else if (c == '}')
        --brace;
    else if (c == '[')
        ++brack;
    else if (c == ']')
        --brack;
    else if (c == '(')
        ++paren;
    else if (c == ')')
        --paren;
}
