// Replacing for loop with while loop

// Introduces user input to 200th triangular number program

#include <stdio.h>

int main(void)
{
    int n = 1, number, triangularNumber = 0;

    printf("What triangular number do you want? ");
    scanf("%i", &number);

    while(n <= number){
        triangularNumber += n;
        n++;
    }
    printf("Traingular number %i is %i\n", number, triangularNumber);

    return 0;
}