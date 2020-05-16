/* Program to calculate the 200th triangular number
   Introduction of the for statement */

#include <stdio.h>

int main(void)
{
    /*
    int n, triangularNumber;

    triangularNumber = 0;

    for (n = 1; n <= 200; n = n + 1)
        triangularNumber = triangularNumber + n;
    */


    // Cleaner way of writing program
    int triangularNumber = 0;

    for (int n = 1; n <= 200; n += 1)
        triangularNumber += n;

    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}