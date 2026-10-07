#include <stdio.h>

int Palindrome();

int main()
{
    int result;

    result = Palindrome();

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

int Palindrome()
{
    int n, original, reverse = 0, rem;

    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

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