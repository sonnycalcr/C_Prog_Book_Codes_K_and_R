#include <stdio.h>

/* lower: convert c to lower case(ASCII only) */
int lower(int c) {
    return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c; //
}

int main(int argc, char *argv[]) {
    int c = 'M';
    int res = lower(c); // m
    printf("Lower case of c is %c.\n", res);
    return 0;
}