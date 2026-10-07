#include <stdio.h>

int EvenOdd();

int main()
{
    int result;

    result = EvenOdd();

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

int EvenOdd()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}