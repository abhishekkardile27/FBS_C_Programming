#include <stdio.h>

void Palindrome(int *n);


int main()
{
    int n;

    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    Palindrome(&n);

    return 0;
}

void Palindrome(int *n)
{
    int original = *n;
    int reverse = 0;
    int digit;

    while (*n > 0)
    {
        digit = *n % 10;
        reverse = reverse * 10 + digit;
        *n = *n / 10;
    }

    if (original == reverse)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    *n = original;
}