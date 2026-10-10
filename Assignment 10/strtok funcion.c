#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";
    char words[] = "C,Java,Python";
    char *ptr;

    printf("strtok = ");
    ptr = strtok(words, ",");

    return 0;
}