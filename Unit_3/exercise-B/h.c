// Write a program to find the octal equivalent of the entered
// number.
#include <stdio.h>
#include <math.h>
int main()
{
    int number, octal = 0, i = 1;
    printf("enter the decimal number:");
    scanf("%d", &number);
    while (number != 0)
    {
        int remainder = number % 8;
        octal = octal + remainder * i;
        number = number / 8;
        i = i * 10;
    }
    printf("octal is %d", octal);
}