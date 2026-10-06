#include <stdio.h>


void calculateSalary(float *basic, float *da, float *ta, float *hra, float *total);

int main()
{
    float basic, da, ta, hra, total;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    calculateSalary(&basic, &da, &ta, &hra, &total);

    printf("\nBasic Salary = %.2f", basic);
    printf("\nDA = %.2f", da);
    printf("\nTA = %.2f", ta);
    printf("\nHRA = %.2f", hra);
    printf("\nTotal Salary = %.2f", total);

    return 0;
}

void calculateSalary(float *basic, float *da, float *ta, float *hra, float *total)
{
    if (*basic <= 5000)
    {
        *da = *basic * 10 / 100;
        *ta = *basic * 20 / 100;
        *hra = *basic * 25 / 100;
    }
    else
    {
        *da = *basic * 15 / 100;
        *ta = *basic * 25 / 100;
        *hra = *basic * 30 / 100;
    }

    *total = *basic + *da + *ta + *hra;
}