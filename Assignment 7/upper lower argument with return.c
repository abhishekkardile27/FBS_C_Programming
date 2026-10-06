#include <stdio.h>

int CheckCase(char *ch);

int main()
{
    char ch;
    int result;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = CheckCase(&ch);

    if (result == 1)
        printf("Uppercase");
    else if (result == 2)
        printf("Lowercase");
    else
        printf("Not an alphabet");

    return 0;
}

int CheckCase(char *ch)
{
    if (*ch >= 'A' && *ch <= 'Z')
        return 1;
    else if (*ch >= 'a' && *ch <= 'z')
        return 2;
    else
        return 0;
}