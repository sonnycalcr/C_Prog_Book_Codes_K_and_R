#include <stdio.h>

void swap(int *px, int *py) /* interchange *px and *py */
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}

int main(int argc, char *argv[]) {
    int x = 1, y = 2;
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}