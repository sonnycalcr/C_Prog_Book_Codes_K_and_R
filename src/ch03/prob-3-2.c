#include <stdio.h>

/* escape: expand newline and tab into visible sequences
   while copying the string t to s */
void escape(char s[], char t[]) {
    int i, j;

    for (i = 0, j = 0; t[i] != '\0'; i++) {
        switch (t[i]) {
        case '\n': /* newline */
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        case '\t': /* tab */
            s[j++] = '\\';
            s[j++] = 't';
            break;
        default: /* all other chars */
            s[j++] = t[i];
            break;
        }
    }
    s[j] = '\0';
}

int main() {
    char t[] = "Hello,\nThis is a\ttest!";
    char s[100];

    escape(s, t);
    printf("Original: %s\n", t);
    printf("Escaped: %s\n", s);

    return 0;
}