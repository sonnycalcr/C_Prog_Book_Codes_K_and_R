#include <stdio.h>

#define TABINC 8 /* tab increment size */

/* replace strings of blanks with tabs and blanks */
int main() {
    int c, nb, nt, pos;

    nb = 0; /* number of blanks necessary */
    nt = 0; /* number of tabs necessary */
    for (pos = 1; (c = getchar()) != EOF; ++pos)
        if (c == ' ') {
            if (pos % TABINC != 0)
                ++nb; /* increment number of blanks */
            else {
                nb = 0; /* reset number of blanks */
                ++nt;   /* one more tab */
            }
        } else {
            for (; nt > 0; --nt)
                putchar('\t'); /* output tab(s) */
            if (c == '\t')     /* forget the blank(s), here is the key point of the answer for the last part of the question */
                nb = 0;
            else
                for (; nb > 0; --nb)
                    putchar(' ');
            putchar(c);
            if (c == '\n')
                pos = 0;
            else if (c == '\t')
                pos = pos + (TABINC - (pos - 1) % TABINC) - 1; /* compute how many single spaces will be skipped */
        }
    return 0;
}
