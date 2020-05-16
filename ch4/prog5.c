// Program to output 5 user specified triangular numbers
// Introduces nested for loops

#include <stdio.h>

int main(void)
{
    int n, number, triangularNumber, counter;

    for(counter = 1; counter <= 5; counter++){
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        //triangularNumber = 0;

        // Since triangularNumber is set to 0 for this loop specifically
        // You can do so within the initial expression section to streamline the code
        for(n = 1, triangularNumber = 0; n<= number; n++){
            triangularNumber += n;
        }

        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}