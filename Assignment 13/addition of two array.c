
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr, *brr, *crr;

    printf("Enter size: ");
    scanf("%d", &n);

 

    arr = malloc(n * sizeof(int));
    brr = malloc(n * sizeof(int));
    crr = malloc(n * sizeof(int));

   

    printf("Enter first array:\n");
    for (i = 0; i <= n; i++)
        scanf("%d", &arr[i]);

    printf("Enter second array:\n");
    for (i = 0; i <= n; i++)
        scanf("%d", &brr[i]);

    for (i = 0; i <= n; i++)
        crr[i] = arr[i] + brr[i];

    printf("Third array: ");
    for (i = 0; i <= n; i++)
        printf("%d ", crr[i]);

    printf("\n");

    free(arr);
    free(brr);
    free(crr);

    return 0;
}
