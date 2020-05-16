// Program that displays a table of n and n^2
// From integer values of 1 to 10

#include <stdio.h>

int main(void)
{
    int n, v;

    printf("Table for n and n^2.\n\n");
    printf(" n    n^2 \n");
    printf("---  -----\n");

    for(n = 1; n <= 10; n++) {
        v = n * n;
        printf(" %2i    %3i\n", n, v);
    }

    return 0;
}