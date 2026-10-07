#include <stdio.h>

int main() {
    int arr[10], n, num, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Number not found\n");
    }

    return 0;
}