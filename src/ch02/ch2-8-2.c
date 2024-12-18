#include <stdio.h>

/* strcat: concatenate t to end of s; s must be big enough */
void my_strcat(char s[], char t[]) {
    int i, j;
    i = j = 0;
    while (s[i] != '\0') // find end of s
        i++;
    while ((s[i++] = t[j++]) != '\0') // copy t
        ;
}

int main(int argc, char *argv[]) {
    char str1[100] = "Hello, "; // predefined string s
    char str2[] = "world!";     // predefined string t

    printf("Original string 1: %s\n", str1);
    printf("Original string 2: %s\n", str2);

    // call the my_strcat function to concatenate str2 to str1
    my_strcat(str1, str2);

    // print the result
    printf("Concatenated string: %s\n", str1);

    return 0;
}
