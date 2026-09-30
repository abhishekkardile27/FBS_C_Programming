#include <stdio.h>

int Palindrome(int n);

int main()
{
    int n, result;

    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    result = Palindrome(n);

    if(result == 1)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }

    return 0;
}

int Palindrome(int n)
{
    int original, reverse = 0, rem;

    original = n;

    while(n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if(original == reverse)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}