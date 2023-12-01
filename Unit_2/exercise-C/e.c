// A five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine
// whether the original and reversed numbers are equal or not.

#include <stdio.h>
int main()
{
    int num, a, b, c, d, e, x;
    printf("Enter a five digit number : ");
    scanf("%d", &num);
    e = num % 10;
    d = (num / 10) % 10;
    c = (num / 100) % 10;
    b = (num / 1000) % 10;
    a = (num / 10000);
    x = e * 10000 + d * 1000 + c * 100 + b * 10 + a;

    if (x == num)
        printf("The reverse of the number is same as given number.");
    else
        printf("The reverse of the number is not same as given number.");
}