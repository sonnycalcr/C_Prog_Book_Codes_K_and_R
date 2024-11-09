#include <stdio.h>

float celsius(float fahr);

int main()
{

    float fahr;
    float lower, upper, step;

    lower = 0;   /* 温度表的下限 */
    upper = 300; /* 温度表的上限 */
    step = 20;   /* 步长 */

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, celsius(fahr));
        fahr = fahr + step;
    }

    return 0;
}

/* celsius: convert fahr into celsius */
float celsius(float fahr) {
    return (5.0 / 9.0) * (fahr - 32.0);
}