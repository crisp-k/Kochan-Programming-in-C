// Program to test if user given numbers are evenly divisible by each other

#include <stdio.h>

int main(void)
{
    int value1, value2;

    printf("Enter first value: ");
    scanf("%i", &value1);

    printf("Enter second value: ");
    scanf("%i", &value2);

    if(value1 % value2 == 0)
        printf("%i is evenly divisible by %i\n", value1, value2);
    else
        printf("%i is not evenly divisible by %i\n", value1, value2);

    return 0;

}