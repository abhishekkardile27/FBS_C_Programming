
#include <stdio.h>

typedef struct
{
    int id;
    char name[30];
    float salary, allowance;
} Admin;

void store(Admin a)
{
    printf("Enter ID: ");
    scanf("%d", &a.id);

    printf("Enter name: ");
    scanf("%s", a.name);

    printf("Enter salary: ");
    scanf("%f", &a.salary);

    printf("Enter allowance: ");
    scanf("%f", &a.allowance);
}

void display(Admin a)
{
    printf("\nID: %d", a.id);
    printf("\nName: %s", a.name);
    printf("\nSalary: %f", a.salary);
    printf("\nAllowance: %f", a.allowance);
}

void main()
{
    Admin a = {0};

    store(a);
    display(a);
}
