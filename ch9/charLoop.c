#include <stdio.h>

int main(void)
{
    int i;
    char c = '1';

    for(i = 0; i <= 100; ++i)
        printf("%c,  ", (c + i));

    return 0;
}