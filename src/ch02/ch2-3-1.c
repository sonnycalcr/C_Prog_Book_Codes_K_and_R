#include <stdio.h>

#define VTAB '\013'
#define BELL '\007'
#define HEXBELL '\x7'
#define HEXBELLAGAIN '\x07' // to see whether we could add a prefix 0

int main() {
    printf("VTAB: %c\n", VTAB);
    // printf("BELL: %c\n", BELL); // ok
    // printf("BELL: %c\n", HEXBELL); // ok
    printf("BELL: %c\n", HEXBELLAGAIN); // ok
    return 0;
}