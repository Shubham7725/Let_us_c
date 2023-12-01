// The policy followed by a company to process customer orders
// is given by the following rules:
// (a) If a customer order is less than or equal to that in stock
// and has credit is OK, supply has requirement.
// (b) If has credit is not OK do not supply. Send him
// intimation.
// (c) If has credit is Ok but the item in stock is less than has
// order, supply what is in stock. Intimate to him data the
// balance will be shipped.
// Write a C program to implement the company policy.

#include <stdio.h>
int main()
{
    int order, stock, credit;
    printf("Enter customer order: ");
    scanf("%d", &order);
    printf("Enter stock: ");
    scanf("%d", &stock);
    printf("Enter credit status 1 for OK 0 for Not OK: ");
    scanf("%d", &credit);
    if (order <= stock && credit == 1)
    {
        printf("Supply has requirement");
    }
    else if (credit == 0)
    {
        printf("Do not supply. Send him intimation");
    }
    else
    {
        printf("Supply what is in stock. Intimate to him data the balance will be shipped");
        printf("Balance quantity: %d", order - stock);
    }
}