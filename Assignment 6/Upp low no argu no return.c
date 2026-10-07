#include <stdio.h>

void checkCase();

void main()
{
    checkCase();

}

void checkCase()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

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