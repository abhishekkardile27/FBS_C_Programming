#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";
    char words[] = "C,Java,Python";
    char *ptr;

    ptr = strstr(str, "World");
    printf("strstr = %s\n", ptr);

    return 0;
}