// A machine is purchased which will produce earning of Rs. 1000 per
//  year while it lasts. The machine costs Rs. 6000 and will
//   have a salvage of Rs. 2000 when it is condemned. If 12 percent per annum can be earned
//    on alternate investments what would be the minimum life of the machine to make it a more attractive
//  investment compared to alternative investment?
#include <stdio.h>
int main()
{
    int year = 0;
    int alternate_investment = 0;
    int investment = -1;
    while (alternate_investment > investment)
    {
        year++;
        alternate_investment = 120 * 2;
        investment = 1000 * year - 4000;
    }
    printf("%d", year);
}