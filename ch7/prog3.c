#include <stdio.h>

void printMessage(void);

int main(void)
{
    int i;

    for(i = 1; i <= 5; ++i)
        printMessage();
}

void printMessage(void)
{
    printf("Programming is fun.\n");
}
