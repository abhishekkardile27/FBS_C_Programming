#include <stdio.h>

void addArrays(int arr[], int brr[], int crr[], int n);
void display(int arr[], int n);

int main()
{
    int arr[10], brr[10], crr[10], n;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter first array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter second array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &brr[i]);

    addArrays(arr, brr, crr, n);

    printf("Third array after addition: ");
    display(crr, n);

    return 0;
}

void addArrays(int arr[], int brr[], int crr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}