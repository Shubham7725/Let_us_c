// Write a program to find the range of a set of numbers. Range
// is the difference between the smallest and biggest number in
// the list.
#include <stdio.h>
#include <limits.h>
int main()
{
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int totalNumbers;
    printf("How many numbers you wants to give:");
    scanf("%d", &totalNumbers);
    for (int i = 1; i <= totalNumbers; i++)
    {
        int number;
        printf("enter the number:");
        scanf("%d", &number);
        if (number < mini)
        {
            mini = number;
        }
        else if (number > maxi)
        {
            maxi = number;
        }
    }
    int range = maxi - mini;
    printf("range is %d", range);
}