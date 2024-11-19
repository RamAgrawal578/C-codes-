#include<stdio.h>
int main () {
  float basic_salary,hra,da,gross_salary;
  printf("Enter the basic salary of the employee: ");
  scanf("%f",&basic_salary);
  hra = (0.20)*basic_salary; // HRA is 20% of baisc salary
  da = (0.50)*basic_salary; // DA is 50% of basic salary
  gross_salary=basic_salary+hra+da;
  printf("Gross Salary = %.2f\n",gross_salary);
  return 0;
}