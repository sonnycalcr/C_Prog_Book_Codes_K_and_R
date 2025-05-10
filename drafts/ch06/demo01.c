#include <stdio.h>
#include <stdlib.h>

struct {
    int len;
    char *str;
} *p;

int main(int argc, char *argv[]) {
    p = malloc(sizeof(int) + sizeof(char *));
    p->len = 5;
    p->str = "hello";
    printf("%s\n", p->str);
    char temp_c = *p++->str;
    printf("c = %c\n", temp_c);
    printf("p->len: %d\n", p->len);
    

    // char c = *p->str;
    // p->str++;
    printf("p->str = %p\n", p->str);
    char c = *p->str++;
    printf("p->str = %p\n", p->str);
    printf("c = %c\n", c);
    c = *p->str++;
    printf("c = %c\n", c);
    
    int a = 12;
    int* p_int = &a;
    p_int += 1;

    c = *p->str;
    p->str = p->str + 1;
    printf("c = %c\n", c);
    c = *p->str;
    p->str = p->str + 1;
    printf("c = %c\n", c);

    char *s = "world";

    printf("s = %p\n", s);

    char c1 = *s++;
    printf("c1 = %c\n", c1);
    printf("*s = %c\n", *s);

    printf("s = %p\n", s);

    // printf("%s\n", p->str);

    return 0;
}