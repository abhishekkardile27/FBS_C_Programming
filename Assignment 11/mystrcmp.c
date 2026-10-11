#include <stdio.h>

int mystrcmp(char str1[], char str2[]);

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";

    if (mystrcmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

int mystrcmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }

    return str1[i] - str2[i];
}