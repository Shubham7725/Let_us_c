// A cashier has currency notes of denominations 10, 50 and
// 100. If the amount to be withdrawn is input through the
// keyboard in hundreds, find the total number of currency notes
// of each denomination the cashier will have to give to the
// withdrawer.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the amount : \n");
    scanf("%d", &a);

    int hundred = a / 100;
    a = a % 100;

    int fifty = a / 50;
    a = a % 50;

    int ten = a / 10;
    a = a % 10;
    printf("hudred Notes:%d \n", hundred);
    printf("fifty Notes:%d \n", fifty);
    printf("ten Notes:%d \n", ten);
}