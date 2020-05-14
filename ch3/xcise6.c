// Program to evaluate polynomial

#include <stdio.h>

int main(void)
{
    double result, x = 2.55;

    result = 3 * (x * x * x) - 5 * (x * x) + 6;

    printf("The value of 3x^3 - 5x^2 + 6 is %f, when x = %f\n", result, x);

    return 0;
}