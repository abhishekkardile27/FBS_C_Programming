#include <stdio.h>

int main() {
    float basic, da, ta, hra, totalSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic <= 5000) {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }

    totalSalary = basic + da + ta + hra;

    printf("Basic Salary = %.2f\n", basic);
    printf("DA = %f\n", da);
    printf("TA = %f\n", ta);
    printf("HRA = %f\n", hra);
    printf("Total Salary = %f\n", totalSalary);

    return 0;
}