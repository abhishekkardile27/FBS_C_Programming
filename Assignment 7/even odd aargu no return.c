#include <stdio.h>

void EvenOdd(int *n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    EvenOdd(&n);

    return 0;
}

void EvenOdd(int *n)
{
    if (*n % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");
}
