
#include <stdio.h>

void sum(int start, int end);

int main()
{
    int start, end;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    sum(start, end);

    return 0;
}

void sum(int start, int end)
{
    int i, s = 0;

    for(i = start; i <= end; i++)
        s = s + i;

    printf("Sum = %d", s);
}