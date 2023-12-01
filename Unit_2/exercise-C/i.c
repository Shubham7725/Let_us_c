// Given the length and breadth of a rectangle, write a program to
// find whether the area of the rectangle is greater than its
// perimeter. For example, the area of the rectangle with length = 5
// and breadth = 4 is greater than its perimeter.

#include <stdio.h>
int main()
{
    float a, b, area, peri;
    printf("Enter the length and breadth of the rectangle : ");
    scanf("%f%f", &a, &b);

    area = a * b;
    peri = 2 * a + 2 * b;

    if (area > peri)
        printf("The area of the rectangle is greater");
    else
        printf("The perimeter of the rectangle is greater");
}