#include <stdio.h>

typedef struct
{
    int id;
    char name[30];
    float salary;
} Employee;

void store(Employee e)
{
    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);
}

void display(Employee e)
{
    printf("\nID: %d", e.id);
    printf("\nName: %s", e.name);
    printf("\nSalary: %f", e.salary);
}

void main()
{
    Employee e = {0};

    store(e);
    display(e);
}