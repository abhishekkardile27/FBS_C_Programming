#include <stdio.h>

void mergeArrays(int arr[], int n, int brr[], int m, int crr[]);
void display(int arr[], int n);

int main()
{
    int arr[10], brr[10], crr[20];
    int n, m;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter first array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter second array:\n");
    for (int i = 0; i < m; i++)
        scanf("%d", &brr[i]);

    mergeArrays(arr, n, brr, m, crr);

    printf("Merged array: ");
    display(crr, n + m);

    return 0;
}

void mergeArrays(int arr[], int n, int brr[], int m, int crr[])
{
    int i;

    for (i = 0; i < n; i++)
        crr[i] = arr[i];

    for (i = 0; i < m; i++)
        crr[n + i] = brr[i];
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}