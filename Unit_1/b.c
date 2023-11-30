// The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance
// in meters, feet, inches and centimeters.
#include <stdio.h>
int main()
{
    float distance;
    printf("enter the distance:");
    scanf("%f", &distance);
    float distanceInMeters = distance * 1000;
    float distanceInFeet = distance * 3280.84;
    float distanceInInches = distance * 39370.08;
    float distanceInCm = distance * 1000 * 100;
    printf("The distance in Feet: %f\n", distanceInFeet);
    printf("The distance in Inches: %f\n", distanceInInches);
    printf("The distance in Meters: %f\n", distanceInMeters);
    printf("The distance in Centimeters: %f\n", distanceInCm);
}