
// Write a program to fill the entire screen with diamond and
// heart alternatively. The ASCII value for heart is 3 and that of
// diamond is 4.
#include <stdio.h>
int main()
{
    int row = 45;
    int column = 200;

    int currentChar = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%c", currentChar);

            if (currentChar == 3)
            {
                currentChar = 4;
            }
            else
            {
                currentChar = 3;
            }
        }
        printf("\n");
    }
}