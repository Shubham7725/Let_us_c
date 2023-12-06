// Write a program to print the multiplication table of the
// number entered by the user. The table should get displayed in
// the following form.
//  29 * 1 = 29
//  29 * 2 = 58
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number for multiply table:");
    scanf("%d", &number);
    for (int i = 1; i <= 10; i++)
    {
        int c = number * i;
        printf("%d * %d = %d\n", number, i, c);
    }
}