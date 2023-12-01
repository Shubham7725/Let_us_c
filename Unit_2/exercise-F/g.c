// If the three sides of a triangle are entered through the
// keyboard, write a program to check whether the triangle is
// isosceles, equilateral, scalene or right angled triangle.
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter the sides of the triangle : ");
    scanf("%f%f%f", &a, &b, &c);
    if (a == b && a == c)
        printf(" equilateral triangle");
    if (a != b && b != c && a != c)
        printf("scalene triangle");
    if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) || (pow(c, 2) + pow(b, 2) == pow(a, 2)) || pow(a, 2) + pow(c, 2) == pow(b, 2))
        printf(" right angled triangle");
    if ((a == b) && a != c || (a == c) && a != b || (c == b) && c != a)
        printf(" isosceles triangle");
}