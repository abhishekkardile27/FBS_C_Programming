#include <stdio.h>

void prime();

int main()
{
    prime();

    return 0;
}

void prime()
{
    int n, i, flag = 0;

    printf("Enter number: ");
    scanf("%d", &n);

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