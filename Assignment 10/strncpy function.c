#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello World";
    char str2[50];




    strncpy(str2, str1, 5);
    str2[5] = '\0';
    printf("First 5 characters = %s\n", str2);

    return 0;
}