// Two numbers are entered through the keyboard. Write a
// program to find the value of one number raised to the power
// of another.
#include <stdio.h>
int main()
{
    int number, power;
    int answer = 1;
    printf("Enter the number and power:");
    scanf("%d%d", &number, &power);
    while (power != 0)
    {
        answer = answer * number;
        power--;
    }
    printf("%d", answer);
}