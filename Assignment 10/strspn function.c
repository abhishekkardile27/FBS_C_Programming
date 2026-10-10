#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "12345abc";

    printf("strspn = %lu\n", strspn(str, "1234567890"));

    return 0;
}