#include <stdio.h>

int main() {
    float marks1=80, marks2=75, marks3=90, marks4=85, marks5=70;
    float total, percentage;

 total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = total / 5;

    printf("Total Marks = %f\n", total);
    printf("Percentage = %f\n", percentage);

    return 0;
}