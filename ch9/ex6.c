#include <stdio.h>
#include <stdbool.h>

void readLine(char buffer[])
{
    char character;
    int i = 0;

    do
    {
        character = getchar();
        buffer[i] = character;
        ++i;
    } while (character != '\n');

    buffer[i - 1] = '\0';
}

void removeString(char string[], int start, int count)
{
    int i, j;

    for(i = 0, j = 0; string[j] != '\0'; ++i, ++j)
    {
        if(j < start)
        {
            string[i] = string[j];
        }
        else if (j >= start)
        {
            string[i] = string[j + count];
        }
    }

    string[i + 1] = '\0';
}

int main(void)
{
    char str[81];
    int start, count;


    printf("Enter a string: ");
    readLine(str);

    printf("Enter first(x) and last(y) index of character to remove[x y]: ");
    scanf("%i %i", &start, &count);

    removeString(str, start, count);

    printf("Resulting string: %s\n", str);

    return 0;
}
