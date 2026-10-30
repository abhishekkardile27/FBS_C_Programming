
#include <stdio.h>

int main()
{
    int base, power, i, result = 1;

    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);

    for(i = 1; i <= power; i++)
    {
        result = result * base;
    }

    printf("Result = %d", result);

    return 0;
}
