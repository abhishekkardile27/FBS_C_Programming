#include <stdio.h>
#include <string.h>

int main()
{
    char *ptr;
 
    printf("strcspn = %lu\n", strcspn("Hello World", " "));

    return 0;
}