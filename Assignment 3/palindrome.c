#include <stdio.h>

void main()
{
    int n = 121;
    int original = n;
    int digit;
    int reverse = 0;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (reverse == original)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

  
}