
#include <stdio.h>

int main()
{
    int start, end, i;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Even numbers: ");
    for(i = start; i <= end; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\nOdd numbers: ");
    for(i = start; i <= end; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
