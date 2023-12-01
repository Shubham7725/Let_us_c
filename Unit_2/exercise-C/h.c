// Find the absolute value of a number entered through the
// keyboard.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a > 0)
        printf(" it's absolute value: %d", a);
    else
        printf(" it's absolute value is: %d", -1 * a);
}