#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], int c) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

int main() {
    char str[] = "hello, world!"; // predefined string
    char charToRemove = 'o';      // character to remove

    printf("Original string: %s\n", str);

    // call the squeeze function
    squeeze(str, charToRemove);

    // print the result
    printf("String after removing character: %s\n", str);

    return 0;
}
