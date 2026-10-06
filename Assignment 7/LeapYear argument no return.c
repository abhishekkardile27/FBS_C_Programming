#include <stdio.h>

void LeapYear(int *year);

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    LeapYear(&year);

    return 0;
}


void LeapYear(int *year)
{
    if ((*year % 400 == 0) || 
        (*year % 4 == 0 && *year % 100 != 0))
        printf("Leap year");
    else
        printf("Not a leap year");
}