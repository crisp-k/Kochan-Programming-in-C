// Displays result of expression using exponential format

#include <stdio.h>

int main(void)
{
    long double a = 3.31e-8, b = 2.01e-7, c = 7.16e-6, d = 2.01e-8;
    double result;

    result = (a * b) / (c * d);

    printf("\na = 3.31e-8\nb = 2.01e-7\nc = 7.16e-6\nd = 2.01e-8\n\n");
    printf("(a * b) / (c * d) = %f\n", result);

    return 0;
}