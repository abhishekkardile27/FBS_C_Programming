#include <stdio.h>

int findSum(int arr[], int n);

int main()
{
    int arr[10], n, sum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sum = findSum(arr, n);

    printf("Sum = %d\n", sum);

    return 0;
}
int findSum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum = sum + arr[i];

    return sum;
}