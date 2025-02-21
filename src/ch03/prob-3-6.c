#include <stdio.h>
#include <string.h>

#define abs(x) ((x) < 0 ? -(x) : (x))

/* reverse: reverse string s in place */
void reverse(char s[]) {
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

/* itoa: convert n to characters in s, w characters wide */
void itoa(int n, char s[], int w) {
    int i, sign;
    sign = n; /* record sign */
    i = 0;

    do {
        s[i++] = abs(n % 10) + '0'; /* get next digit */
    } while ((n /= 10) != 0); /* delete it */

    if (sign < 0)
        s[i++] = '-';

    while (i < w) /* pad with blanks */
        s[i++] = ' ';

    s[i] = '\0';
    reverse(s);
}

int main() {
    char s[100];
    int n = -123;
    int w = 10; // Minimum width

    itoa(n, s, w);
    printf("Integer: %d\nString (width %d): '%s'\n", n, w, s);

    return 0;
}