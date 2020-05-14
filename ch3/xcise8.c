// Next multiple forumula

#include <stdio.h>

int main(void)
{
    int i, i1 = 256, i2 = 365, i3 = 12258, i4 = 996;
    int j, j1 = 7, j2 = 23, j3 = 4;

    int Next_multiple;

    i = i1;
    j = j1;
    Next_multiple = i + j - i % j;
    printf("\nIf i = %i, and j = %i\n", i1, j1);
    printf("Next multiple = %i\n\n", Next_multiple);

    i = i2;
    j = j1;
    Next_multiple = i + j - i % j;
    printf("If i = %i, and j = %i\n", i, j);
    printf("Next multiple = %i\n\n", Next_multiple);

    i = i3;
    j = j2;
    Next_multiple = i + j - i % j;
    printf("If i = %i, and j = %i\n", i, j);
    printf("Next multiple = %i\n\n", Next_multiple);

    i = i4;
    j = j3;
    Next_multiple = i + j - i % j;
    printf("If i = %i, and j = %i\n", i, j);
    printf("Next multiple = %i\n\n", Next_multiple);

    return 0;
}