#include <stdio.h>

#define paste(front, back) front##back

int main(int argc, char *argv[]) {
    // int vara = 12;
    int paste(var, a) = 12;
    printf("vara = %d\n", vara);
    return 0;
}