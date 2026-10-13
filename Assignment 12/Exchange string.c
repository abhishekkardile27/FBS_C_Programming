
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    temp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = temp;

    printf("New string: %s", str);

    return 0;
}
