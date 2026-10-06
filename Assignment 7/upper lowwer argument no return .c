#include <stdio.h>



void checkCase(char *ch);

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    checkCase(&ch);

    return 0;
}

void checkCase(char *ch)
{
    if (*ch >= 'A' && *ch <= 'Z')
        printf("Uppercase character");
    else if (*ch >= 'a' && *ch <= 'z')
        printf("Lowercase character");
    else
        printf("Not an alphabet");
}