//Program to generate the first 15 Fibonacci numbers
#include <stdio.h>

int main(void)
{
    int i, fibbA, fibbB, fibbC;
/*
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for(i = 2; i < 15; i++)
        Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];

    for(i = 0; i < 15; i++)
        printf("%i\n", Fibonacci[i]);

*/
    fibbA = 0;
    fibbB = 1;

    printf("%i\n%i\n", fibbA, fibbB);

    for(i = 0; i < 13; ++i)
        {
            fibbC = fibbA + fibbB;

            fibbA = fibbB;
            fibbB = fibbC;

            printf("%i\n", fibbC);
        }

    return 0;
}





