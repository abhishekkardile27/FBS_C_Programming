
#include <stdio.h>

int getNumber()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    return n;
}

int main()
{
    int n, i;

    n = getNumber();

    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);

    return 0;
}