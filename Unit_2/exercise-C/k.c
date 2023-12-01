// Given the coordinates (x, y) of a center of a circle and it’s radius,
// write a program which will determine whether a point lies inside
// the circle, on the circle or outside the circle.

#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, r, x2, y2, distance;

    printf("Enter the x,y-coordinate of the center of the circle: ");
    scanf("%f%f", &x1, &y1);

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("Enter the x,ycoordinate of the point: ");
    scanf("%f%f", &x2, &y2);

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    if (distance < r)
    {
        printf("The point is inside the circle.");
    }
    else if (distance == r)
    {
        printf("The point is on the circle.");
    }
    else
    {
        printf("The point is outside the circle.");
    }
}