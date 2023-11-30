// If the total selling price of 15 items and the total profit earned
// on them is input through the keyboard, write a program to
// find the cost price of one item
#include <stdio.h>
int main()
{
    float SP, P, CP;
    printf("Enter the selling price:\n");
    scanf("%f", &SP);
    printf("Enter the Profit:\n");
    scanf("%f", &P);
    CP = (SP - P) / 15;
    printf("Cost Price of each item is:%f\n", CP);
}