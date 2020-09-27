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

void subString (const char source[], int start, int count, char result[])
{
    int i;

    for(i = 0; i < count; ++i)
    {
        if(source[start + i] != '\0')
            result[i] = source[start + i];
        else 
            break;
    }

    result[i + 1] = '\0';
}

int main(void)
{
    char source[81], result[81];
    int start, count;
    bool endOfText = false;

    printf("Enter string: ");
    readLine(source);

    printf("Enter desired start(x) and end(y) [x y]: ");
    scanf("%i %i", &start, &count);

    subString(source, start, count, result);

    printf("Result: %s\n", result);

    return 0;
}
