// Given three points (x1, y1), (x2, y2) and (x3, y3), write a
// program to check if all the three points fall on one straight line

#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3, area;
    printf("Enter x-y coordinates of first point : ");
    scanf("%f%f", &x1, &y1);

    printf("Enter x-y coordinates of second point : ");
    scanf("%f%f", &x2, &y2);

    printf("Enter x-y coordinates of third point : ");
    scanf("%f%f", &x3, &y3);

    area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    if (area == 0)
        printf("collinear");
    else
        printf("not collinear");
}