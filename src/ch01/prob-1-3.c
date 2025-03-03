#include <stdio.h>

/* 当 fahr=0, 20, ..., 300 时，分别
   打印华氏温度与摄氏温度对照表 floating-point version */
int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /* 温度表的下限 */
    upper = 300; /* 温度表的上限 */
    step = 20;   /* 步长 */

    printf("Fahr Celsius\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}

