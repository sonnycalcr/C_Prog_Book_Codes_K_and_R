#include<stdio.h>

#define TABINC 8 /* tab increment size */

/* replace tabs with the proper number of blans */
int main() {
    int c, nb, pos;

    nb = 0; /* number of blans necessary */
    pos = 1; /* position of character in line */
    while ((c = getchar()) != EOF) {
        if (c =='\t') { /* tab character */
            nb = TABINC - (pos - 1) % TABINC; /* compute how many single spaces will be needed */
            while (nb > 0) {
                putchar(' ');
                ++pos;
                --nb;
            }
        } else if (c == '\n') { /* newline character */
            putchar(c);
            pos = 1;
        } else {
            putchar(c);
            ++pos;
        }
    }
    return 0;
}
