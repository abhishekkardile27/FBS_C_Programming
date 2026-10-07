#include <stdio.h>

float calculateSalary();

int main()
{
    float total;

    total = calculateSalary();

    printf("Total Salary = %.2f", total);

    return 0;
}

float calculateSalary()
{
    float basic, da, ta, hra, total;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if(basic <= 5000)
    {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else
    {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }

    total = basic + da + ta + hra;

    return total;
}