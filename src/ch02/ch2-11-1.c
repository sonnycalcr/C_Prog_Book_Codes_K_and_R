#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;
    int n = 12;
    int a[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (i = 0; i < n; i++)
        printf("%6d%c", a[i], (i % 10 == 9 || i == n - 1) ? '\n' : ' ');
    return 0;
}
