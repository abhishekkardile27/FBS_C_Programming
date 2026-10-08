#include <stdio.h>

void findMinMax(int arr[], int n);

int main()
{
    int arr[10], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findMinMax(arr, n);

    return 0;
}

void findMinMax(int arr[], int n)
{
    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}