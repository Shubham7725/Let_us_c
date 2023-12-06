// Write a program to print all prime numbers from 1 to 300.
// (Hint: Use nested loops, break and continue)
#include <stdio.h>

int main()
{ // finding the prime number using the fact that the prime number is a number which has only two factors that is number itself and 1.
    for (int i = 1; i <= 300; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
            // checking the count variable if it is more than the the 2 the break the loop
            if (count > 2)
            {
                break;
            }
        }
        if (count > 2)
        {
            continue;
        }
        else
        {
            printf("%d is prime\n", i);
        }
    }
    return 0;
}