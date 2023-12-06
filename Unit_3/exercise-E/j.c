// Write a program to produce the following output:
//  1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
#include <stdio.h>
int main()
{

    // outer loop for rows
    for (int i = 1; i <= 5; i++)
    {

        //  loop  for leading white spaces
        for (int j = 0; j < 5 - i; j++)
        {
            printf(" ");
        }

        int C = 1; // coefficient

        //  loop  for printing numbers
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
}
