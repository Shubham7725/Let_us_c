// A certain grade of steel is graded according to the following
// conditions:
// (i) Hardness must be greater than 50
// (ii) Carbon content must be less than 0.7
// (iii) Tensile strength must be greater than 5600
// The grades are as follows:
// Grade is 10 if all three conditions are met
// Grade is 9 if conditions (i) and (ii) are met
// Grade is 8 if conditions (ii) and (iii) are met
// Grade is 7 if conditions (i) and (iii) are met
// Grade is 6 if only one condition is met
// Grade is 5 if none of the conditions are met
// Write a program, which will require the user to give values of
// hardness, carbon content and tensile strength of the steel
// under consideration and output the grade of the steel.
#include <stdio.h>
int main()
{
    float h, c, t;
    int one = 0, two = 0, three = 0, grade;
    printf("Enter the hardness, carbon content and tensile strength : ");
    scanf("%f%f%f", &h, &c, &t);
    if (h > 50)
        one = 1;
    if (c < 0.7)
        two = 1;
    if (t > 5600)
        three = 1;
    if (one && two && three)
        grade = 10;
    else if (one && two && !three)
        grade = 9;
    else if (two && three && !one)
        grade = 8;
    else if (one && three && !two)
        grade = 7;
    else if (one && !two && !three)
        grade = 6;
    else if (!one && !two && !three)
        grade = 5;
    printf("Grade of the steel : %d", grade);
}