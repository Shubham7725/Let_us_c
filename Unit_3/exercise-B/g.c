// Write a program to enter the numbers till the user wants and
// at the end it should display the count of positive, negative and
// zeros entered.
#include <stdio.h>
int main()
{
    int number, zeroes = 0, positive = 0, negative = 0, next = 1;
    do
    {
        printf("Enter the integer : ");
        scanf("%d", &number);
        if (number == 0)
            zeroes++;
        if (number > 0)
            positive++;
        if (number < 0)
            negative++;

        printf("continue? 1 for YES and 0 for NO :");
        scanf("%d", &next);
    } while (next);

    printf("You have entered %d positive, %d negative and %d zero integers.", positive, negative, zeroes);
}