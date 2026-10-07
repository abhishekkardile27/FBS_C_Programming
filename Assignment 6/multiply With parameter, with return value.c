
#include <stdio.h>

int multiply(int n, int i);

int main()
{
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
        printf("%d ", multiply(n, i));

    return 0;
}
int multiply(int n, int i)
{
    return n * i;
}