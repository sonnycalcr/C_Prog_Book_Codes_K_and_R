#include <stdio.h>

#define forever for (;;) /* infinite loop */
#define max(A, B) ((A) > (B) ? (A) : (B))

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

    return 0;
}