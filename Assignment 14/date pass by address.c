#include <stdio.h>

typedef struct
{
    int date, month, year;
} Date;

void store(Date *d)
{
    printf("Enter date: ");
    scanf("%d", &d->date);

    printf("Enter month: ");
    scanf("%d", &d->month);

    printf("Enter year: ");
    scanf("%d", &d->year);
}

void display(Date *d)
{
    printf("\nDate: %d", d->date);
    printf("\nMonth: %d", d->month);
    printf("\nYear: %d", d->year);
}

int main(void)
{
    Date d;

    store(&d);
    display(&d);

    return 0;
}