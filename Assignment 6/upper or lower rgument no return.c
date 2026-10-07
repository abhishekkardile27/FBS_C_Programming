#include <stdio.h>

void upperorlow(char ch);

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    upperorlow(ch);

    return 0;
}

void upperorlow(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}