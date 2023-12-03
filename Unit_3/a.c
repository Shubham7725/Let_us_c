// Write a program to calculate overtime pay of 10 employees.
// Overtime is paid at the rate of Rs. 12.00 per hour for every
// hour worked above 40 hours. Assume that employees do not
// work for fractional part of an hour.

#include <stdio.h>
int main()
{
    int hour, overtime_payment;

    for (int i = 1; i <= 10; i++)
    {
        printf("enter the hours of employee:");
        scanf("%d", &hour);
        if (hour <= 40)
        {
            printf("No overtime\n");
        }
        else
        {
            overtime_payment = (hour - 40) * 12;
            printf("The overtimepaid of employee %d is %d\n", i, overtime_payment);
        }
    }
}