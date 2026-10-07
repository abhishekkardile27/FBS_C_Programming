#include <stdio.h>

int LeapYear();

int main()
{
    int result;

    result = LeapYear();

    if(result == 1)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }

    return 0;
}

int LeapYear()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}