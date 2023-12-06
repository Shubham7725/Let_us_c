// Write a program to add first seven terms of the following
// series using a for loop:
// 1
// 1!
// 2
// 2!
// 3
// 3! ……
#include <stdio.h>
int main()
{
    int j;
    float i, fact, sum = 0;
    for (i = 1; i <= 7; i++)
    {
        fact = i;
        for (j = 1; j < i; j++)
            fact = fact * j;

        int series = i / fact;
        sum = sum + series;
    }
    printf("%f is the sum of the series.", sum);
}