// If a four-digit number is input through the keyboard, write a
// program to obtain the sum of the first and last digit of this
// number.
#include <stdio.h>
int main()
{
    int a, b, e;
    printf("Enter a four digit number:");
    scanf("%d", &a);
    b = a % 10;

    e = (a % 10000) / 1000;
    int sum = b + e;
    printf("the sum of first and last digit is:%d", sum);
}