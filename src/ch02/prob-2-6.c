#include <stdio.h>

/* setbit: set n bits of x at position p with bist of y */
unsigned setbits(unsigned x, int p, int n, unsigned y) {
    /*
     * 1. ~(~0 << n): 把从右往左数的开始的 n 个 bit 位设置成 1，其他位都为 0
     * 2. ~(~0 << n) << (p + 1 - n): 相当于先左移 p 位，然后再右移 n - 1 位，这里要注意，p 是从 0 开始计数，n 是从 1 开始计数，因此，这里就相当于把从右边开始的 n 个 bit 给移动到从第 p 位开始的 n 个位置
     * 3. ~(~(~0 << n) << (p + 1 - n)): 将从第 p 位开始的 n 个位置都置成 0，其他位都是 1
     * 4. x & ~(~(~0 << n) << (p + 1 - n)): 将 x 中的从第 p 位开始的 n 个位置都清零，其他位保持不变(关键点 1)
     * 5. y & ~(~0 << n): 把 y 的最右边 n 位的 bit 位的值保持不变，其他所有位置的 bit 位的值都置成 0
     * 6. (y & ~(~0 << n)) << (p + 1 - n):把第 5 步中的结果从右边开始的 n 个 bit 给移动到从第 p 位开始的 n 个位置(关键点 2)
     * 7. x & ~(~(~0 << n) << (p + 1 - n)) | (y & ~(~0 << n)) << (p + 1 - n): 把第 4 步和第 6 步的结果作一下按位或运算
     */
    return x & ~(~(~0 << n) << (p + 1 - n)) | (y & ~(~0 << n)) << (p + 1 - n);
}

int main(int argc, char *argv[]) {
    // 将 x 中从第 5 位开始的 3 个二进制位设置成 y 中的最右边的 3 位的值，x 的其余各位保持不变
    // x: 288: 1,0010,0000
    // y: 263: 1,0000,0111
    // p: 5
    // n: 3
    // expected result: 312: 1,0011,1000
    // 把 x, y 和 result 放在一起，看上去会更加直观一些：
    // 288: 1,0010,0000
    // 263: 1,0000,0111
    // 312: 1,0011,1000
    int x = 288;
    int y = 263;
    int p = 5;
    int n = 3;
    int res = setbits(x, p, n, y); // expected: 312
    printf("res: %d\n", res);
    return 0;
}