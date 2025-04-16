#include <stdio.h>

/* strlen: return length of string s */
int my_strlen(char *s) {
    int n;
    for (n = 0; *s != '\0'; s++)
        n++;
    return n;
}

int main(int argc, char *argv[]) {
    char s[] = "I am a string";
    printf("length of s: %d\n", my_strlen(s)); // length of s: 13
    return 0;
}