#include <stdio.h>

int main() {
    int arr[10], n, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of all numbers = %d\n", sum);

    return 0;
}