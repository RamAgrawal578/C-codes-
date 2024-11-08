#include <stdio.h>

int main() {
    float basic_salary, hra, da, gross_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter the HRA (in percentage): ");
    scanf("%f", &hra);

    printf("Enter the DA (in percentage): ");
    scanf("%f", &da);

    hra = (hra / 100) * basic_salary;
    da = (da / 100) * basic_salary;
    gross_salary = basic_salary + hra + da;

    printf("Gross Salary = %.2f\n", gross_salary);

    return 0;
}
