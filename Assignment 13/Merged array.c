
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i;
    int *arr, *brr, *crr;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    arr = malloc(n * sizeof(int));
    brr = malloc(m * sizeof(int));
    crr = malloc((n + m) * sizeof(int));

  

    printf("Enter first array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter second array:\n");
    for (i = 0; i < m; i++)
        scanf("%d", &brr[i]);

    for (i = 0; i < n; i++)
        crr[i] = arr[i];

    for (i = 0; i < m; i++)
        crr[n + i] = brr[i];

    printf("Merged array: ");
    for (i = 0; i < n + m; i++)
        printf("%d ", crr[i]);

    printf("\n");

    free(arr);
    free(brr);
    free(crr);

    return 0;
}
