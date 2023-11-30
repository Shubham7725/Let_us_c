// Two numbers are input through the keyboard into two
// locations C and D. Write a program to interchange the
// contents of C and D.
#include <stdio.h>
int main()
{
    int c, d;
    printf("enter the C:\n");
    scanf("%d", &c);
    printf("enter the d:\n");
    scanf("%d", &d);
    c = c + d;
    d = c - d;
    c = c - d;
    printf("The value of c = %d\n", c);
    printf("The value of d = %d\n", d);
}