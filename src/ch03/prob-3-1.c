#include <stdio.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high && x != v[mid]) {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    if (x == v[mid]) /* found match */
        return mid;
    else /* no match */
        return -1;
}

int main() {
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