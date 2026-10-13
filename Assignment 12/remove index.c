
#include <stdio.h>

int main() {
    char str[100];
    int i, n;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter index to remove: ");
    scanf("%d", &n);

    for (i = n; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }

    printf("String after removal: %s", str);

    return 0;
}
