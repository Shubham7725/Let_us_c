// If a five-digit number is input through the keyboard, write a
// program to print a new number by adding one to each of its
// digits. For example if the number that is input is 12391 then
// the output should be displayed as 23402.
#include <stdio.h>

int main()
{
    int number, digit, newNumber = 0;
    printf("Enter a five digit number: ");
    scanf("%d", &number);
    while (number > 0)
    {
        digit = number % 10;
        if (digit == 9)
        {
            newNumber = newNumber * 10;
        }
        else
        {
            newNumber = newNumber * 10 + digit + 1;
        }
        number /= 10;
    }
    printf("New number: %d", newNumber);
    return 0;
}
