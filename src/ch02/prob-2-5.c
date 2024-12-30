#include <stdio.h>

/* any: return first location in s1 where any char from s2 occurs */
int any(char s1[], char s2[]) {
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j]) /* match found? */
                return i;       /* location first match */
    return -1;                  /* otherwise, no match */
}

int main(int argc, char *argv[]) {
    char s1[] = "what is your name?";
    char s2[] = "my name is fanyfull.";
    int res = any(s1, s2);
    printf("any result is: %d\n", res);
    return 0;
}