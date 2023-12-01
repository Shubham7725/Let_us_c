// A library charges a fine for every book returned late. For first
// 5 days the fine is 50 paise, for 6-10 days fine is one rupee and
// above 10 days fine is 5 rupees. If you return the book after 30
// days your membership will be cancelled. Write a program to
// accept the number of days the member is late to return the
// book and display the fine or the appropriate message.
#include <stdio.h>
int main()
{
    float chrg;
    int day;
    printf("Enter the days: ");
    scanf("%d", &day);

    if (day <= 5)
        printf("Your fine is 0.5 rs");

    if (day > 5 && day < 11)
        printf("Your fine is 1 rs");

    if (day > 10 && day < 31)
        printf("Your fine is 5 rs");

    if (day > 30)
        printf("library membership has been cancelled.");
}