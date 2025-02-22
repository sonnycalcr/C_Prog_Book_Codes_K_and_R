#include <stdio.h>

int x;
int y;

void f(double x) {
    double y; //
    printf("x = %f\n", x);
    x += 2;
}

int f2(double x) {
    return 2; //
}

int main() {
    double x = 12.0;
    f(x);
    int res = f2(x);
    printf("%d\n", f2(x));
    return 0;
}