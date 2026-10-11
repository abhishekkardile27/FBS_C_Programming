#include <stdio.h>

int mystrrchr(char str[], char ch);

int main()
{
    char str[] = "Hello";
    char ch = 'l';

    printf("Position = %d", mystrrchr(str, ch));

    return 0;
}

int mystrrchr(char str[], char ch)
{
    int i, pos = -1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            pos = i;
    }

    return pos;
}