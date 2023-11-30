// In a town, the percentage of men is 52. The percentage of
// total literacy is 48. If total percentage of literate men is 35 of
// the total population, write a program to find the total number
// of illiterate men and women if the population of the town is
// 80,000.
#include <stdio.h>
int main()
{
    int totalPopulation = 80000;
    int totalMen = (52 * totalPopulation) / 100;
    int totalWomen = totalPopulation - totalMen;
    int totalLiteracy = (48 * totalPopulation) / 100;
    int menLiteracy = (35 * totalPopulation) / 100;
    int womenLiteracy = totalLiteracy - menLiteracy;
    int illiterateMen = totalMen - menLiteracy;
    int illiterateWomen = totalWomen - womenLiteracy;
    printf("No. of illeterate Men are:%d\n", illiterateMen);
    printf("No. of illeterate women are:%d\n", illiterateWomen);
}