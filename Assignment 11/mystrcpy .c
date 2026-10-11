#include <stdio.h>

void mystrcpy(char dest[], char src[]);

int main()
{
    char source[] = "Hello";
    char destination[20];

    mystrcpy(destination, source);

    printf("Copied string = %s", destination);

    return 0;
}

void mystrcpy(char dest[], char src[])
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}