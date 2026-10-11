#include <stdio.h>

int mystrstr(char str[], char sub[]);

int main()
{
    char str[] = "Hello World";
    char sub[] = "World";

    printf("Position = %d", mystrstr(str, sub));

    return 0;
}

int mystrstr(char str[], char sub[])
{
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; sub[j] != '\0'; j++)
        {
            if (str[i + j] != sub[j])
                break;
        }

        if (sub[j] == '\0')
            return i;
    }

    return -1;
}