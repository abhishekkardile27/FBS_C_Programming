#include <stdio.h>

typedef struct
{
    int id;
    char name[30];
    float salary, incentive;
    int target;
} SalesManager;

void store(SalesManager *s)
{
    printf("Enter ID: ");
    scanf("%d", &s->id);

    printf("Enter Name: ");
    scanf("%29s", s->name);

    printf("Enter Salary: ");
    scanf("%f", &s->salary);

    printf("Enter Incentive: ");
    scanf("%f", &s->incentive);

    printf("Enter Target: ");
    scanf("%d", &s->target);
}

void display(SalesManager *s)
{
    printf("\nID: %d", s->id);
    printf("\nName: %s", s->name);
    printf("\nSalary: %f", s->salary);
    printf("\nIncentive: %f", s->incentive);
    printf("\nTarget: %d", s->target);
}

int main(void)
{
    SalesManager s;

    store(&s);
    display(&s);

    return 0;
}