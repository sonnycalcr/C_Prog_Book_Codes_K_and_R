#include <stdio.h>

/* bitcount: count 1 bits in x - faster version */
int bitcount(unsigned x) {
    int b;

    for (b = 0; x != 0; x &= x - 1)
        ++b;
    return b;
}

int main(int argc, char *argv[]) {
    unsigned x = 55;       // 0b0011_0111
    int res = bitcount(x); // 5
    printf("x has %d bits that are set to 1.\n", res);
    return 0;
}