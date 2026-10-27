
#include <stdio.h>

int main()
{
    int start, end, i, sum = 0;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i = i + 2)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}
