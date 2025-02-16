#include <stdio.h>

/* bitcount: count 1 bits in x - faster version */
int bitcount(unsigned x) {
    int b;

    for (b = 0; x != 0; x &= x - 1)
        ++b;
    return b;
}

int main(int argc, char *argv[]) { return 0; }