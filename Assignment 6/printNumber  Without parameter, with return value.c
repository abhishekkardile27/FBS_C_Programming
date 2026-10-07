#include <stdio.h>



int main()
{
    int n, i;

    n = getNumber();

    for(i = 1; i <= n; i++)
        printf("%d ", i);

    return 0;
}

int getNumber()
{
    return 10;
}