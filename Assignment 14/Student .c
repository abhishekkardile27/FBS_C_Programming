#include <stdio.h>

struct Student
{
    int rollNo;
    char name[30];
    float marks;
};

void main()
{
    struct Student s;

    store(s);
    display(s);
} 


void store(struct Student s)
{
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter name: ");
    scanf("%29s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);
}

void display(struct Student s)
{
    printf("\nRoll No: %d", s.rollNo);
    printf("\nName: %s", s.name);
    printf("\nMarks: %.2f", s.marks);
}