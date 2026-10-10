#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";
    char words[] = "C,Java,Python";
    char *ptr;
 
    ptr = strrchr(str, 'o');
    printf("strrchr = %s\n", ptr);

   
    return 0;
}