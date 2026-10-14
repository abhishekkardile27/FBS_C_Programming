
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, key, *arr, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);



    arr = malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Number not found\n");

    free(arr);
    return 0;
}
