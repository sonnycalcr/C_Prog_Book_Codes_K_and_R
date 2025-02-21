#include <stdio.h>

/* squeeze: delete each char in s1 whick is in s2 */
void squeeze(char s1[], char s2[]) {
    int i, j, k;

    for (i = k = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
            ;
        if (s2[j] == '\0') /* end of string - no match */
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
}

int main() {
    char s1[] = "what is your name?";
    char s2[] = "my name is fanyfull.";
    printf("original s1: %s \n", s1);
    printf("original s2: %s \n", s2);
    squeeze(s1, s2);
    printf("squeezed s1: %s \n", s1);
    return 0;
}