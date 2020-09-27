#include <stdio.h>

int main(void)
{
    int total = 0;
    double nums[10], average;

    printf("Please enter in floating-point values: \n");

    for(int i = 0; i < 10; ++i)
        {
            printf("Value #%i: ", (i + 1));
            scanf("%lf", &nums[i]);

            total = total + nums[i];
        }

    average = total / 10;

    printf("Average of values is: %.02lf", average);

    return 0;
}