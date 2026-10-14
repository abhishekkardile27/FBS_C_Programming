
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, *arr, prime;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));
    

    printf("Enter elements:\n");
    for (i = 0; i <= n; i++)
        scanf("%d", &arr[i]);

    printf("Prime numbers: ");

    for (i = 0; i <= n; i++)
    {
        if (arr[i] < 2)
            continue;

        prime = 1;

        for (j = 2; j <= arr[i] / j; j++)
        {
            if (arr[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);
    return 0;
}
