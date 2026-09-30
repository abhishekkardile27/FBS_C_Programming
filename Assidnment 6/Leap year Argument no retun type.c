#include <stdio.h>

void LeapYear(int year);

void main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    LeapYear(year);

}

void LeapYear(int year)
{
    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }
}