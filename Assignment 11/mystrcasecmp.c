#include <stdio.h>

int mystrcasecmp(char str1[], char str2[]);

int main()
{
    char str1[] = "Hello";
    char str2[] = "HELLO";

    if (mystrcasecmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

int mystrcasecmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        char a = str1[i];
        char b = str2[i];

        if (a >= 'A' && a <= 'Z')
            a = a + 32;

        if (b >= 'A' && b <= 'Z')
            b = b + 32;

        if (a != b)
            return a - b;

        i++;
    }

    return str1[i] - str2[i];
}