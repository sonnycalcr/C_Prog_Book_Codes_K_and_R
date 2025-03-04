#include <stdio.h>

#define forever for (;;) /* infinite loop */
#define max(A, B) ((A) > (B) ? (A) : (B))

#define square(x) x *x /* WRONG */

int main() {

    /*
    int i = 0;

    forever {
        printf("%d\n", i++); //
    }

    for (;;) {
        printf("%d\n", i++); //
    }
    */

    int a = 12;
    int b = 13;
    int c = max(a, b);
    int d = ((a) > (b) ? (a) : (b));
    printf("%d\n", c);
    printf("%d\n", d);

    int p = 1, q = 3, r = 4, s = 2;
    int x = max(p + q, r + s);
    printf("x = %d\n", x);
    x = ((p + q) > (r + s) ? (p + q) : (r + s));
    printf("x = %d\n", x);

    int i = 1;
    int j = 2;
    int k = max(i++, j++); /* WRONG */
    printf("k = %d\n", k);

    int x1 = 2;
    int square_x = square(x1);
    int x1_2 = square(x1 + 1);
    x1_2 = x1 + 1 * x1 + 1;
    printf("square_x = %d\n", square_x);
    printf("x1_2 = %d\n", x1_2);

    return 0;
}