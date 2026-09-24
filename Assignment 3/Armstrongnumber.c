#include <stdio.h>

 void main()
{
    int n = 153;
    int original = n;
    int remainder;
    int sum = 0;

    while (n > 0)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (sum == original)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    
}