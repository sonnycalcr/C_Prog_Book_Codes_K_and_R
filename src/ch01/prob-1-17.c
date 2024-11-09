#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
#define LONGLINE 80

int my_getline(char line[], int maxline);

/* print lines longer than LONGLINE */
int main() {
    int len;            /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = my_getline(line, MAXLINE)) > 0)
        if (len > LONGLINE)
            printf("%s", line);

    return 0;
}

/* my_getline: read a line into s, return length */
int my_getline(char s[], int lim) {
    int c, i, j;
    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < lim - 2) {
            s[j] = c; /* line still in boundaries */
            ++j;
        }
    if (c == '\n') {
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}
