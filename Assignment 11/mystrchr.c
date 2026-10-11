#include <stdio.h>

int mystrchr(char str[], char ch);

int main()
{
    char str[] = "Hello";
    char ch = 'l';

    printf("Position = %d", mystrchr(str, ch));

    return 0;
}

int mystrchr(char str[], char ch)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            return i;
    }

    return -1;
}
