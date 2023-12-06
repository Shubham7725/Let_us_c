// Write a program to produce the following output:
// A B C D E F G F E D C B A
// A B C D E F F E D C B A
// A B C D E E D C B A
// A B C D D C B A
// A B C C B A
// A B B A
// A A
#include <stdio.h>
int main()
{
    for (int i = 0; i < 7; i++)
    {
        // letter
        char c = 'A';
        for (int j = 0; j < 7 - i; j++)
        {
            printf("%c", c);
            c++;
        }

        // space
        for (int j = 0; j < 2 * i - 1; j++)
        {

            printf(" ");
        }
        // letter
        c--;
        for (int j = 0; j < 7 - i; j++)
        {
            printf("%c", c);
            c--;
        }

        printf("\n");
    }
}