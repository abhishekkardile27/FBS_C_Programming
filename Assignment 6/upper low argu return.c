#include <stdio.h>

char checkCase(char ch);

int main()
{
    char ch, result;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = checkCase(ch);

    if(result == 'U')
    {
        printf("Uppercase");
    }
    else if(result == 'L')
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }

    return 0;
}

char checkCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return 'U';
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        return 'L';
    }
    else
    {
        return 'O';
    }
}