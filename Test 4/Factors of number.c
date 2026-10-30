
#include <stdio.h>

int main()
{
    int start, end, i, j;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i++)
    {
        printf("%d = ", i);

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    return 0;
}
