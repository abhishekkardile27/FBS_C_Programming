#include <stdio.h>

void   checkPalindrome();

void main()
{
    checkPalindrome();


}

void checkPalindrome()
{
    int n, original, reverse = 0, rem;

    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

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