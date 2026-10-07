
#include <stdio.h>

void sum();

int main()
{
    sum();

    return 0;
}

void sum()
{
    int start, end, i, s = 0;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++)
        s = s + i;

    printf("Sum = %d", s);
}