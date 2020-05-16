// Updating prog5 to allow user to choose how many numbers they wish to enter

#include <stdio.h>

int main(void)
{
    int n, number, numReq, triangularNumber, counter;


    printf("\nHow many triangular numbers do you want? ");
    scanf("%i", &numReq);

    for(counter = 1; counter <= numReq; counter++){
        printf("\nWhat triangular number do you want? ");
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