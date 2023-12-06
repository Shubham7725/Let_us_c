// Write a program to produce the following output:
//      1
//     2 3
//    4 5 6
//   7 8 9 10
#include <stdio.h>
int main()
{
    int num = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j <= 4 - i - 2)
            {
                printf(" ");
            }
            else
            {
                printf("%d ", num);
                num++;
            }
        }

        printf("\n");
    }
}