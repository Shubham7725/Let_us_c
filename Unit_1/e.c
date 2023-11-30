// The length & breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the
// area & perimeter of the rectangle, and the area &
// circumference of the circle.
#include <stdio.h>
int main()
{
    float l, b, r;
    printf("Enter the length:\n");
    scanf("%f", &l);
    printf("Enter the breadth:\n");
    scanf("%f", &b);
    printf("Enter the radius:\n");
    scanf("%f", &r);
    float areaOfRec = l * b;
    float periOfRec = 2 * (l + b);
    float areaOfCir = 3.14 * r * r;
    float circumOfCir = 2 * 3.14 * r;
    printf("Area of rectangle:%.2f\n", areaOfRec);
    printf("perimeter of rectangle:%.2f\n", periOfRec);
    printf("Area of Circle:%.2f\n", areaOfCir);
    printf("Circumference of Circle:%.2f\n", circumOfCir);
}