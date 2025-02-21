#include <stdio.h>

/* invert: inverts the n bits of x that beginat position p
 * 按：书接上一题。p 是从右边开始，从 0 开始计数。
 */
unsigned invert(unsigned x, int p, int n) {
    /*
     * 1. ~(~0 << n): 把从右往左数的开始的 n 个 bit 位设置成 1，其他位都为 0
     * 2. ~(~0 << n) << (p + 1 - n): 相当于先左移 p 位，然后再右移 n - 1 位，这里要注意，p 是从 0 开始计数，n 是从 1 开始计数，因此，这里就相当于把从右边开始的 n 个 bit 给移动到从第 p 位开始的 n 个位置
     * 3. x ^ ((~(~0 << n)) << (p + 1 - n)): 按位异或
     */
    return x ^ ((~(~0 << n)) << (p + 1 - n));
}

int main() {
    // x: 288: 1,0010,0000
    // p: 5
    // n: 3
    // expected result: 280: 1,0001,1000
    // 把 x 和 result 放在一起，看上去会更加直观一些：
    // 288: 1,0010,0000
    // 280: 1,0001,1000
    int x = 288;
    int p = 5;
    int n = 3;
    int res = invert(x, p, n); // expected: 280
    printf("res: %d\n", res);
    return 0;
}