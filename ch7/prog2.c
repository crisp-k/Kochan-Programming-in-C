//Shows the effect of adding another call to function

#include <stdio.h>

void printMessage(void);

int main(void)
{
    printMessage();
    printMessage();

    return 0;
}

void printMessage(void)
{
    printf("Programming is fun.\n");
}
