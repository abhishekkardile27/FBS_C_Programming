#include <stdio.h>

void mystrlower(char str[]);

int main()
{
    char str[] = "HELLO";

    mystrlower(str);

    printf("%s", str);

    return 0;
}

void mystrlower(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}