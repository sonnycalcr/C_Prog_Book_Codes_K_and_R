#include <stdio.h>

int factorial_recursive(int n) {
    if (n <= 1) return 1;
    return n * factorial_recursive(n - 1);
}

int main() {
    int res = factorial_recursive(5);
    printf("res = %d\n", res);
    return 0;
}