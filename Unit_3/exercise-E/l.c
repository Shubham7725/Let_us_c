// When interest compounds q times per year at an annual rate of
// r % for n years, the principle p compounds to an amount a as per
// the following formula
// a = p ( 1 + r / q ) nq
// Write a program to read 10 sets of p, r, n & q and calculate
// the corresponding as.
#include <stdio.h>
#include <math.h>
int main()
{
    float i, principal, q, rate, time, amount, b;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter principal, rate, time (in year) and compound interest respectively : ");
        scanf("%f%f%f%f", &principal, &rate, &time, &q);

        b = pow((1 + rate / q), time * q);
        amount = principal * b;

        printf("%f is the amount\n", amount);
    }
}