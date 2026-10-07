#include <stdio.h>

void checkEvenOdd();

void main()
{
    checkEvenOdd();

   
}

void checkEvenOdd()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
}