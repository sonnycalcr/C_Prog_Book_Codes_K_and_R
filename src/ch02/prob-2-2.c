#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

enum loop { NO, YES };
enum loop okloop = YES;

int main() {
    int i = 0;
    int c;
    char s[MAXLINE];
    int lim = MAXLINE;
    while (okloop == YES)
        if (i >= lim - 1) /* outside of valid range? */
            return 0;
        else if ((c = getchar()) == '\n')
            okloop = NO;
        else if (c == EOF) /* end of file? */
            okloop = NO;
        else {
            s[i] = c;
            ++i;
        }
    s[i] = '\0';
    printf("Your input is: %s\n", s);
    return 0;
}