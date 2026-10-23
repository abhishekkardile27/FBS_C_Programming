#include <stdio.h>

typedef struct
{
    int id;
    char name[30];
    float salary, commission;
} HR;

void store(HR *h)
{
    printf("Enter ID: ");
    scanf("%d", &h->id);

    printf("Enter Name: ");
    scanf("%s", h->name);

    printf("Enter Salary: ");
    scanf("%f", &h->salary);

    printf("Enter Commission: ");
    scanf("%f", &h->commission);
}

void display(HR *h)
{
    printf("\nID: %d", h->id);
    printf("\nName: %s", h->name);
    printf("\nSalary: %f", h->salary);
    printf("\nCommission: %f", h->commission);
}

int main(void)
{
    HR h;

    store(&h);
    display(&h);

    return 0;
}