#include <stdio.h>

void findOddEven(int arr[], int n);

int main()
{
    int arr[10], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findOddEven(arr, n);

    return 0;
}

void findOddEven(int arr[], int n)
{
    printf("Even numbers: ");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers: ");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
}