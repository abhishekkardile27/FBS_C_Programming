#include <stdio.h>

int EvenOdd(int n);

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = EvenOdd(n);

    if(result == 1)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}

int EvenOdd(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}