#include <stdio.h>

void reverseArray(int arr[], int n);

int main()
{
    int arr[10], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    return 0;
}

void reverseArray(int arr[], int n)
{
    printf("\nReverse array: ");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
