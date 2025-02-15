#include <stdio.h>

/* rightrot: rotate x to the right by n positions */
unsigned rightrot(unsigned x, int n) {
    int wordlength(void);
    int rbit; /* rightmost bit */

    while (n-- > 0) {
        rbit = (x & 1) << (wordlength() - 1);
        x = x >> 1; /* shift x 1 position right */
        x = x | rbit;
    }
    return x;
}

unsigned rightrot_v2(unsigned x, int n) {
    int wordlength(void);
    unsigned rbits;

    if ((n - n % wordlength()) > 0) {
        rbits = ~(~0 << n) & x; /* n rightmost bits of x */
                                /* n rightmost bits to left */
        rbits = rbits << (wordlength() - n);
        x = x >> n;    /* x shifted n positions right */
        x = x | rbits; /* rotation completed */
    }
    return x;
}

int main() {
    /*
        x = 0b0000_0000_0000_0000_0000_0000_0011_0111 // 55
        n = 3
        res = 0b1110_0000_0000_0000_0000_0000_0000_0110 // 3758096390
    */
    unsigned x = 55;
    int n = 3;
    unsigned res = rightrot(x, n);
    unsigned res_v2 = rightrot_v2(x, n);
    printf("%u\n", res);
    printf("%u\n", res_v2);
    return 0;
}

/* wordlength: computes word length of the machine */
int wordlength(void) {
    int i;
    unsigned v = (unsigned)~0;

    for (i = 1; (v = v >> 1) > 0; i++)
        ;
    return i;
}