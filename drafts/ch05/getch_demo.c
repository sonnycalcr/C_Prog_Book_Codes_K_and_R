#include <stdio.h>

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;
/* buffer for ungetch */
/* next free position in buf */
int getch(void) /* get a (possibly pushed-back) character */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c) /* push character back on input */
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

int main(int argc, char *argv[]) {
    int ch = getch();
    printf("ch = %c\n", ch);
    ch = getch();
    printf("ch = %c\n", ch);
    ungetch(49);
    ungetch(49);
    ungetch(49);
    ungetch(49);
    ungetch(49);
    ungetch(49);
    ungetch(49);
    ungetch(49);
    ungetch(49);
    ungetch(49);
    ungetch(49);
    ungetch(49);
    printf("%s\n", buf);
    return 0;
}