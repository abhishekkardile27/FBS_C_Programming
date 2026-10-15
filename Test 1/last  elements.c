
#include <stdio.h>

int main()
{
    int num, last;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 100;

    printf("Last two digits = %d", last);

    return 0;
}
