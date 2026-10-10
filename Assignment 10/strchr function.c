#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";
    char words[] = "C,Java,Python";
    char *ptr;

    ptr = strchr(str, 'o');
    printf("strchr = %s\n", ptr);

    

    return 0;
}