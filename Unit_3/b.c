// Write a program to find the factorial value of any number
// entered through the keyboard.
#include <stdio.h>
int main()
{
    double number;
    printf("Enter a number you want factorial:");
    scanf("%lf", &number);
    double factorial = 1;
    for (double i = number; i >= 1; i--)
    {
        factorial *= i;
    }
    printf("The factorial of %lf is %lf ", number, factorial);
}