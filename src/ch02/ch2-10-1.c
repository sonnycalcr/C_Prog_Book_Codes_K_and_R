#include <stdio.h>

/* bitcount: count 1 bits in x */
int bitcount(unsigned x) {
    int b;
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}

int main(int argc, char *argv[]) {
    unsigned x = 12;

    // call bitcount function and store the result
    int count = bitcount(x);
    printf("The number of 1 bits in %u is: %d\n", x, count);

    return 0;
}

