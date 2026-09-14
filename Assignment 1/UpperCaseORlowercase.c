#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase character", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase character", ch);
    }
    else {
        printf("It is not an alphabet");
    }

    return 0;
}