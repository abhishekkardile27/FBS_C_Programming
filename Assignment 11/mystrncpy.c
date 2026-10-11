#include <stdio.h>

void mystrncpy(char dest[], char src[], int n) ;
int main()
{
    char source[] = "Hello World";
    char destination[20];

    mystrncpy(destination, source, 5);
    destination[5] = '\0';

    printf("Copied string = %s", destination);

    return 0;
}


void mystrncpy(char dest[], char src[], int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }
}