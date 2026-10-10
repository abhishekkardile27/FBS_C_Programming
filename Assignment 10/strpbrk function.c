#include <stdio.h>
#include <string.h>

int main()
{
    char *ptr;

    ptr = strpbrk("Hello World", "aeiou");

    printf("strpbrk = %s\n", ptr);

    return 0;
}