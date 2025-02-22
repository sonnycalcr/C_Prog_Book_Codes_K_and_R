#include <stdio.h>

void counter() {
    static int count = 0; // only initialized when this function is called for the first time
    count++;
    printf("This function has been called %d times.\n", count);
}

void counterWithoutStatic() {
    int count = 0;
    count++;
    printf("This function has been called %d times.\n", count);
}

int main() {
    counter(); // This function has been called 1 times.
    counter(); // This function has been called 2 times.
    counter(); // This function has been called 3 times.
    counterWithoutStatic();
    counterWithoutStatic();
    counterWithoutStatic();
    return 0;
}