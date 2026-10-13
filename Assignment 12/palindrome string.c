
#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        rev[len - 1 - i] = str[i];
    }
    rev[len] = '\0';

    if (str[0] == rev[0]) {
        for (i = 0; i < len; i++) {
            if (str[i] != rev[i])
                break;
        }

        if (i == len)
            printf("String is Palindrome");
        else
            printf("String is not Palindrome");
    } else {
        printf("String is not Palindrome");
    }

    return 0;
}
