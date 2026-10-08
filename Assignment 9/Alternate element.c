#include <stdio.h>

void printAlternate(int arr[], int n);

int main()
{
    int arr[10], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printAlternate(arr, n);

    return 0;
}

void printAlternate(int arr[], int n)
{
    printf("Alternate elements: ");

    for (int i = 0; i < n; i = i + 2)
    {
        printf("%d ", arr[i]);
    }
}