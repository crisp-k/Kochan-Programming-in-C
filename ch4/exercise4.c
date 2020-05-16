// Program to display a table of the first 10 factorials

#include <stdio.h>

int main(void)
{
    int n, count, factorial;

    printf("Table of factorials.\n\n");
    printf(" n    Factorial \n");
    printf("---  -----------\n");

    for(count = 1; count <= 10; count++){

        factorial = 1;
        n = count;

        while(n > 0){
            factorial = factorial * n;
            n = n - 1;
        }

        printf(" %2i      %7i\n", count, factorial);
    }

    return 0;
}