#include <stdio.h>

int mystrlen(char str[]);

int main()
{
    char str[] = "Hello";

    printf("Length of string = %d", mystrlen(str));

    return 0;
}
int mystrlen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}