// If the ages of Ram, Shyam and Ajay are input through the
// keyboard, write a program to determine the youngest of the
// three.

#include <stdio.h>
int main()
{
    int b1, b2, b3;
    printf("Enter the age of b1,b2,b3: ");
    scanf("%d%d%d", &b1, &b2, &b3);

    if (b1 < b2 && b1 < b3)
        printf("b1 is youngest");
    else if (b2 < b1 && b2 < b3)
        printf("b2 is youngest");
    else
        printf("b3 is youngest");
}