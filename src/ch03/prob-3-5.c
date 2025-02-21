/**
 * Notice: This version cannot handle largest negative number
 */
#include <stdio.h>
#include <string.h>
#include <limits.h>

/* reverse: reverse string s in place */
void reverse(char s[]) {
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

/* itob: convert n to characters in s - base b */
void itob(int n, char s[], int b) {
    int i, j, sign;
    void reverse(char s[]);

    if ((sign = n) < 0) /* record sign */
        n = -n;         /* make n positive */
    i = 0;
    do {           /* generate digits in reverse order */
        j = n % b; /* get next digit */
        s[i++] = (j <= 9) ? j + '0' : j + 'a' - 10;
    } while ((n /= b) > 0); /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

int main() {
    char s[100];
    int n = 12345;
    int b = 16; // Base 16 for hexadecimal

    itob(n, s, b);
    printf("Integer: %d\nString (base %d): %s\n", n, b, s); // 3039

    return 0;
}