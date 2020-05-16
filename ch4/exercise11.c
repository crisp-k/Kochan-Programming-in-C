// Program that calculates the sum of digits of an integer.

#include <stdio.h>

int main(void)
{
    int number, digit, sum = 0;

    printf("Enter your number: ");
    scanf("%i", &number);

    while(number != 0) {
        digit = number % 10;
        sum += digit;
        number = number / 10;
    }

    printf("%i\n", sum);
    
    return 0;
}