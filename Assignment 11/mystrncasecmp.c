#include <stdio.h>

int mystrncasecmp(char str1[], char str2[], int n);
int main()
{
    char str1[] = "Hello";
    char str2[] = "HELLO";

    printf("Result = %d", mystrncasecmp(str1, str2, 3));

    return 0;
}

int mystrncasecmp(char str1[], char str2[], int n)
{
    int i;
    char a, b;

    for (i = 0; i < n; i++)
    {
        a = str1[i];
        b = str2[i];

        if (a >= 'A' && a <= 'Z')
            a = a + 32;

        if (b >= 'A' && b <= 'Z')
            b = b + 32;

        if (a != b)
            return a - b;

        if (a == '\0')
            return 0;
    }

    return 0;
}
