
#include <stdio.h>

int main()
{
    int hh, min, sec, total;

    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &hh, &min, &sec);

    total = (hh * 3600) + (min * 60) + sec;

    printf("Total seconds = %d", total);

    return 0;
}
