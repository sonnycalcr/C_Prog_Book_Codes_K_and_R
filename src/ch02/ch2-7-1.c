#include <stdio.h>

/* my_atoi: convert s to integer */
int my_atoi(char s[]) {
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

/* my_lower: convert c to lower case; ASCII only */
int my_lower(int c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int main() { return 0; }