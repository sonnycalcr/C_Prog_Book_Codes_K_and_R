#include <stdio.h>

/* rightrot: rotate x to the right by n positions */
unsigned rightrot(unsigned x, int n) {
    int wordlength(void);
    unsigned rbits;

    if ((n = n % wordlength()) > 0) {
        rbits = ~(~0 << n) & x;              /* n rightmost bits of x */
        rbits = rbits << (wordlength() - n); /* n rightmost bits to left */
        x = x >> n;                          /* x shifted n positions right */
        x = x | rbits;                       /* rotation completed */
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
    printf("%u\n", res);
    return 0;
}

/* wordlength: computes word length of the machine */
int wordlength(void) {
    int i;
    unsigned v = (unsigned)~0;

    for (i = 1; (v = v >> 1) > 0; i++)
        ;
    return i; // expected: 32
}