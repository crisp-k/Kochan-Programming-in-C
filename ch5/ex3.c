// Program to divide use given numbers

#include <stdio.h>

int main(void)
{
    float value1, value2;

    printf("Enter first value: ");
    scanf("%f", &value1);

    printf("Enter second value: ");
    scanf("%f", &value2);

    if(value2 == 0)
        printf("Error, division by 0\n");
    else
        printf("%f / %f = %.3f\n", value1, value2, (value1 / value2));

    return 0;

}