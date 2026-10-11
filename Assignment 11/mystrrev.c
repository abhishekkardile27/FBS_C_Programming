#include <stdio.h>

void mystrrev(char str[]);

int main()
{
    char str[] = "HELLO";

    mystrrev(str);

    return 0;
}

void mystrrev(char str[])
{
    int i, len = 0;

    while (str[len] != '\0')
        len++;

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}