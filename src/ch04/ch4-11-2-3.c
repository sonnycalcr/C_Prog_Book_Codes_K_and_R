#include <stdio.h>

#define dprint(expr) printf(#expr " = %g\n", expr)

int main(int argc, char *argv[]) {
    double x = 4;
    double y = 2;
    dprint(x / y);
    printf("x / y"
           " = %g\n",
           x / y);
    return 0;
}