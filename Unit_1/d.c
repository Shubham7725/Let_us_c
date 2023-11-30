// Temperature of a city in Fahrenheit degrees is input through
// the keyboard. Write a program to convert this temperature
// into Centigrade degrees.
#include <stdio.h>
int main()
{
    float tempInF, tempInCel;

    printf("Enter the temprature in degree fahrenheit : ");
    scanf("%f", &tempInF);

    tempInCel = (tempInF - 32) * 5 / 9;
    printf("the temp in celsius is : %.2f", tempInCel);
}