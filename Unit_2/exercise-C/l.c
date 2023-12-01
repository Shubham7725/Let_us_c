// Given a point (x, y), write a program to find out if it lies on the
// x-axis, y-axis or at the origin, viz. (0, 0).

#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter the x-y coordinates of the point : ");
    scanf("%f%f", &x, &y);
    if (x == 0 && y == 0)
        printf("The point is on the origin.");
    if (x == 0 && y != 0)
        printf("The point lie on the y-axis");
    if (x != 0 && y == 0)
        printf("The points lie on the x-axis");
    if (x != 0 && y != 0)
        printf("The points lie on the plane");
}