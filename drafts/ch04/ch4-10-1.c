#include <stdio.h>

int x = 0;

void simpleRecurse() {
    if (x > 5) {
        return;
    }
    x += 1;
    int currentX = x;
    printf("x = %d\n", x);
    simpleRecurse();
}

void f() {}

int main() {
    simpleRecurse();
    f();
    printf("x");
    return 0;
}