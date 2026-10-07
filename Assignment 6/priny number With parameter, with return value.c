
#include <stdio.h>

int  getNumber(int n);
int main()
{
    int n, i;

    n = getNumber(10);

    for(i = 1; i <= n; i++)
        printf("%d ", i);

    return 0;
}

int getNumber(int n)
{
    return n;
}
