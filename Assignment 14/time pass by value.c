#include <stdio.h>

typedef struct
{
    int hour, min, sec;
} Time;

void store(Time t)
{
    printf("Enter hour: ");
    scanf("%d", &t.hour);

    printf("Enter minutes: ");
    scanf("%d", &t.min);

    printf("Enter seconds: ");
    scanf("%d", &t.sec);
}

void display(Time t)
{
    printf("\nHour: %d", t.hour);
    printf("\nMinutes: %d", t.min);
    printf("\nSeconds: %d", t.sec);
}

int main(void)
{
    Time t = {0};

    store(t);
    display(t);

    return 0;
}S