#include <stdio.h>
#include <string.h>
#include <limits.h>

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

/* itoa: convert n to characters in s - modified */
void itoa(int n, char s[]) {
    int i, sign;
    sign = n; /* record sign */
    i = 0;

    do {                            /* generate digits in reverse order */
        s[i++] = abs(n % 10) + '0'; /* get next digit */
    } while ((n /= 10) != 0); /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

int main() {
    char s[100];
    int n = INT_MIN; // Largest negative number

    itoa(n, s);
    printf("Integer: %d\nString: %s\n", n, s);

    return 0;
}