// Program that generates a table of every 5th triangular number
// from 5 to 50
// Using the formula n (n + 1) / 2

#include <stdio.h>

int main(void)
{
    int n, v, triangularNumber;

    printf("\nTable of every 5th\n");
    printf("triangular number from 5 to 50\n\n");
    
    printf(" n     Triangular Number\n");
    printf("---  -------------------\n");

    for(n = 5; n <= 50; n += 5){

        triangularNumber = n * (n + 1) / 2;

        printf(" %2i            %6i\n", n, triangularNumber);
    }

    return 0;
}