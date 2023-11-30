// If a five-digit number is input through the keyboard, write a
// program to calculate the sum of its digits.
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("Enter a five digit number:");
    scanf("%d", &a);
    b = a % 10;
    c = (a % 100) / 10;
    d = (a % 1000) / 100;
    e = (a % 10000) / 1000;
    f = (a % 100000) / 10000;
    int sum = b + c + d + e + f;
    printf("Sum of digits:%d", sum);
}