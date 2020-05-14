// Program that converts 27F to C

#include <stdio.h>

int main(void)
{
    int F = 27;
    double C;

    printf("Temp in Fahrenheit: %iF\n", F);

    C = (F - 32) / 1.8;

    printf("Temp in Celsius: %f\n", C);

    return 0;
}