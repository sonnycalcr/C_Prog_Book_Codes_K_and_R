#include <stdio.h>

/* unescape: convert escape sequences into real characters */
/*           while copying the string t to s               */
void unescape(char s[], char t[]) {
    int i, j;

    for (i = j = 0; t[i] != '\0'; i++) {
        if (t[i] != '\\')
            s[j++] = t[i]; /* it is not a backslash */
        else
            switch (t[++i]) {
            case 'n': /* real newline */
                s[j++] = '\n';
                break;
            case 't': /* real tab */
                s[j++] = '\t';
                break;
            default: /* all other chars */
                s[j++] = '\\';
                s[j++] = t[i + 1];
                break;
            }
    }
    s[j] = '\0';
}

int main() {
    char t[] = "Hello,\\nThis is a\\ttest!";
    char s[100];

    unescape(s, t);
    printf("Original: %s\n", t);
    printf("Unescaped: %s\n", s);

    return 0;
}