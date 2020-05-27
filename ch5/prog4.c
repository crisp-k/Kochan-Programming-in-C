// Program to determine if a number is even or odd
// Re-written to include an if-else statement

#include <stdio.h>

int main(void)
{
    int number_to_test, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if(remainder == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    return 0;
}