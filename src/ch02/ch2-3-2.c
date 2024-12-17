#include <stdio.h>

#define MAXLINE 1000
char line[MAXLINE + 1];

#define LEAP 1 /* in leap years */
int days[31 + 28 + LEAP + 32 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31];

/* my_strlen: return length of s */
int my_strlen(char s[]) {
    int i = 0;

    while (s[i] != '\0')
        ++i;
    return i;
}

int main(int argc, char *argv[]) {
    char s[] = "I am a string";
    char s2[] = "";
    char s3[] = "hello,"
                " world";
    printf("%s\n", s);
    printf("%s\n", s2);
    printf("%s\n", s3);
    printf("length of s: %d\n", my_strlen(s));
    printf("length of s: %d\n", my_strlen(s2));
    printf("length of s: %d\n", my_strlen(s3));
    return 0;
}