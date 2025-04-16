#include <stdio.h>

/* strlen: return length of string s */
int my_strlen(char *s) {
    char *p = s;
    while (*p != '\0')
        p++;
    return p - s;
}

int main(int argc, char *argv[]) {
    printf("strlen(\"abc\") = %d\n", my_strlen("abc"));
    return 0;
}