// If a five-digit number is input through the keyboard, write a
// program to reverse the number.
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
    int reverse = b * 10000 + c * 1000 + d * 100 + e * 10 + f * 1;
    printf("The reverse of number is:%d", reverse);
}