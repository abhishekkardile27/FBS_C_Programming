#include <stdio.h>

int main() {
    int arr[10], n;
    int min, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    printf("Minimum number = %d\n", min);
    printf("Maximum number = %d\n", max);

    return 0;
}