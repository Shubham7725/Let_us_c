// If cost price and selling price of an item is input through the
// keyboard, write a program to determine whether the seller has
// made profit or incurred loss. Also determine how much profit
// he made or loss he incurred.

#include <stdio.h>
int main()
{
    float sp, cp;

    printf("Enter the selling price and cost price of the item : ");
    scanf("%f%f", &sp, &cp);

    if (sp - cp > 0)
        printf("profit is Rs %.2f", sp - cp);
    else if (sp - cp < 0)
        printf("loss is Rs %.2f", sp - cp);
    else
        printf("Neither profit nor  loss.");
}