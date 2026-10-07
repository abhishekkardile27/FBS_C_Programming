#include <stdio.h>

void prime(int n);

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    prime(n);

    return 0;
}

void prime(int n)
{
    int i, flag = 0;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(n > 1 && flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
}