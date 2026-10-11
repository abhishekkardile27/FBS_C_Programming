#include <stdio.h>

int mystrnstr(char str[], char sub[], int n);

int main()
{
    char str[] = "Hello World";
    char sub[] = "World";

    printf("Position = %d", mystrnstr(str, sub, 11));

    return 0;
}

int mystrnstr(char str[], char sub[], int n)
{
    int i, j;

    for (i = 0; i < n && str[i] != '\0'; i++)
    {
        for (j = 0; sub[j] != '\0'; j++)
        {
            if (i + j >= n || str[i + j] != sub[j])
                break;
        }

        if (sub[j] == '\0')
            return i;
    }

    return -1;
}