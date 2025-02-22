#include <stdio.h>

int x = 1;
char squota = '\'';
long day = 1000L * 60L * 60L * 24L; /* milliseconds/day */

int y;

void f() {
    // int x; // We cannot do this! => use an auto variable without initialization
    // printf("auto x = %d\n", x);
}

int main() {
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    f();
    return 0; //
}