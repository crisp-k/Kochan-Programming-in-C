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

int findString(const char string1[], const char string2[])
{
    int i, j;
    bool match;

    for(i = 0; string1[i] != '\0'; ++i)
    {
        for(j = 0; string2[j] != '\0'; ++j)
        {
            if(string1[i + j] == string2[j])
                match = true;
        }
        
        if(match)
            return i;
    }

    return -1;
}

int main(void)
{
    char str1[81], str2[81];
    int index;

    printf("Enter a string: ");
    readLine(str1);

    printf("Enter a string to be found: ");
    readLine(str2);

    index = findString(str1, str2);

    printf("Match found at: %i\n", index);

    return 0;
}
