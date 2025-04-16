#include <stdio.h>

int main(int argc, char *argv[]) {
    char amessage[] = "now is the time"; /* define an array */
    char *pmessage = "now is the time";  /* define a pointer */
    printf("amessage: %s\n", amessage);
    printf("pmessage: %s\n", pmessage);
    return 0;
}