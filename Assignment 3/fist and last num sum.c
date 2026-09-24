#include <stdio.h>

int main()
{
    int n = 12345;
    int first, last, sum;

    // Find last digit
    last = n % 10;

    // Find first digit
    first = n;

    while (first >= 10)
    {
        first = first / 10;
    }

    sum = first + last;

    printf("Sum = %d", sum);

    return 0;
}