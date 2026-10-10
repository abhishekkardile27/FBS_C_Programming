#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello ";
    char str2[15] = "World";
    char str3[15] = "Hello";

 

    strncat(str3, " World", 6);
    printf("After strncat = %s\n", str3);


    return 0;
}