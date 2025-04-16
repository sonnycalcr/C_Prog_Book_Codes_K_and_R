#include <stdio.h>

#define ALLOCSIZE 10000          /* size of available space */
static char allocbuf[ALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuf;  /* next free position */

char *alloc(int n) /* return pointer to n characters */
{
    if (allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
        allocp += n;
        return allocp - n; /* old p */
    } else                 /* not enough room */
        return 0;
}
void afree(char *p) /* free storage pointed to by p */
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}

int main(int argc, char *argv[]) {
    char *s1, *s2;
    s1 = alloc(5);
    s1[0] = 'a';
    s1[1] = 'b';
    s1[2] = 'c';
    s1[3] = 'd';
    s1[4] = '\0';
    s2 = alloc(10);
    s2[0] = 'e';
    s2[1] = 'f';
    s2[2] = 'g';
    s2[3] = 'h';
    s2[4] = 'i';
    s2[5] = '\0';
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    if (s1 && s2) {
        afree(s1);
        afree(s2);
    }
    return 0;
}