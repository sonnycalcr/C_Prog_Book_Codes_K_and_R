#include <stdio.h>
#define max_val 1

int main(int argc, char *argv[]) {
    printf("%d\n", max_val);
#undef max_val
    // printf("%d\n", max_val);
    return 0;
}