// Introduces user input to 200th triangular number program

#include <stdio.h>

int main(void)
{
    int n, number, triangularNumber = 0;

    printf("What triangular number do you want? ");
    scanf("%i", &number);

    for(n = 1; n <= number; ++n)
        triangularNumber += n;
    
    printf("Traingular number %i is %i\n", number, triangularNumber);

    return 0;
}