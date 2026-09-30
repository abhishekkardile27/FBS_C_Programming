#include <stdio.h>

void Palindrome(int n);

void main()
{
    int n;

    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    Palindrome(n);


}

void Palindrome(int n)
{
    int original, reverse = 0, rem;

    original = n;

    while(n > 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if(original == reverse)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }
}