#include <stdio.h>

typedef struct
{
    int feet, inch;
} Distance;

void store(Distance *d)
{
    printf("Enter feet: ");
    scanf("%d", &d->feet);

    printf("Enter inch: ");
    scanf("%d", &d->inch);
}

void display(Distance *d)
{
    printf("\nFeet: %d", d->feet);
    printf("\nInch: %d", d->inch);
}

int main(void)
{
    Distance d;

    store(&d);
    display(&d);

    return 0;
}