// Ramesh’s basic salary is input through the keyboard. His
// dearness allowance is 40% of basic salary, and house rent
// allowance is 20% of basic salary. Write a program to calculate
// his gross salary.

#include <stdio.h>
int main()
{
    float basicSalary;
    printf("Enter the Basicsalary:");
    scanf("%f", &basicSalary);
    float dearnessAllowance = (40 * basicSalary) / 100;
    float HRA = (20 * basicSalary) / 100;
    float grossSalary = basicSalary - (dearnessAllowance + HRA);
    printf("%.2f", grossSalary);
}