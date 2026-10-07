#include <stdio.h>

int main() {
    int arr[10], n, i, j, prime;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers are: ");

    for (i = 0; i < n; i++) {
        if (arr[i] < 2)
            continue;

        prime = 1;

        for (j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}