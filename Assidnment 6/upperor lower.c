#include <stdio.h>

char checkCase();

int main()
{
    char result;

    result = checkCase();

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

char checkCase()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

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