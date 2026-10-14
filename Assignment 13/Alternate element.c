
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *arr;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));
    

    printf("Enter elements:\n");
    for (i = 0; i <= n; i++)
        scanf("%d", &arr[i]);

    printf("Alternate elements: ");
    for (i = 0; i <= n; i += 2)
        printf("%d ", arr[i]);

    printf("\n");

    free(arr);
    return 0;
}
