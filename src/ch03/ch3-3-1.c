#include <stdio.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            /* found match */
            return mid;
    }
    return -1; /* no match */
}

int main(int argc, char *argv[]) {
    int x = 12;
    int v[8] = {1, 5, 8, 12, 16, 33, 34, 55};
    int n = 8;
    int res = binsearch(x, v, n);
    printf("res = %d\n", res); // 3
    x = 13;
    res = binsearch(x, v, n);
    printf("res = %d\n", res); // -1
    return 0;
}