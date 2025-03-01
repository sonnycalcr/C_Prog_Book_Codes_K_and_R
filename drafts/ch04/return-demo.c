#include <stdio.h>

int check_number_ifelse(int n) {
    if (n > 0) {
        return 1; // 正数返回 1
    } else if (n < 0) {
        return -1; // 负数返回 -1
    } else {
        return 0; // 零返回 0
    }
}

int check_number_return(int n) {
    if (n > 0) {
        return 1; // 正数返回 1
    }

    if (n < 0) {
        return -1; // 负数返回 -1
    }

    return 0; // 零返回 0
}

int main() {
    printf("1: %d\n", check_number_ifelse(1));
    printf("1: %d\n", check_number_return(1));
    return 0;
}