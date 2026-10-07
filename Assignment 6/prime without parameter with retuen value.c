#include <stdio.h>

int prime();

int main()
{
    if(prime())
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

int prime()
{
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return n > 1;
}