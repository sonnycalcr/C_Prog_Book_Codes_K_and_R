#include <stdio.h>

void qsort(int v[], int left, int right);

int main() {
    int v[8] = {12, 13, 15, 10, 9, 3, 6, 2}; // 10, 12, 13, 15    2, 3, 6, 9
    int left = 0;
    int right = 7;
    qsort(v, left, right);
    for (int i = 0; i < 8; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}

/* qsort:  sort v[left]...v[right] into increasing order */
void qsort(int v[], int left, int right) {
    int i, last;
    void swap(int v[], int i, int j);
    if (left >= right) /* do nothing if array contains */
        return;
    /* fewer than two elements */
    swap(v, left, (left + right) / 2); /* move partition elem */
    last = left;
    /* to v[0] */
    for (i = left + 1; i <= right; i++) /* partition */ /* pivot */
        if (v[i] < v[left])
            swap(v, ++last, i);
    // {12, 13, 15, 10, 9, 3, 6, 2} // i = 1, last = 0
    // {12, 13, 15, 10, 9, 3, 6, 2} // i = 2, last = 0
    // {12, 13, 15, 10, 9, 3, 6, 2} // i = 3, last = 0
    // {10, 13, 15, 12, 9, 3, 6, 2} // i = 4, last = 1
    // {10, 9, 15, 12, 13, 3, 6, 2} // i = 5, last = 2
    // {10, 9, 3, 12, 13, 15, 6, 2} // i = 6, last = 3
    // {10, 9, 3, 6, 13, 15, 12, 2} // i = 7, last = 4
    // {10, 9, 3, 6, 2, 15, 12, 13} // i = 8, last = 4
    swap(v, left, last); // => {2, 9, 3, 6, 10, 15, 12, 13}
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

/* swap:  interchange v[i] and v[j] */
void swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}