// Write a program to fill the entire screen with a smiling face.
// The smiling face has an ASCII value 1
#include <stdio.h>

int main()
{

    char smiling_face = 1;
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            printf("%c", smiling_face);
        }
        printf("\n");
    }

    return 0;
}