#include <stdio.h>

#define HDR

#if !defined(HDR)
#define HDR
/* hdr.h 文件的内容放在这里 */
#endif

int main(int argc, char *argv[]) {
#ifdef HDR
    printf("HDR is defined.\n");
#endif
    return 0;
}