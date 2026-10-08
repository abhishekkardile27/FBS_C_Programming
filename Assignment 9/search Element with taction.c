#include <stdio.h>
void searchElement(int arr[], int n, int key);

int main()
{
    int arr[10], n, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    searchElement(arr, n, key);

    return 0;
}

void searchElement(int arr[], int n, int key)
{
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("%d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("%d not found in array\n", key);
}
