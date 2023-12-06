// Write a program for a matchstick game being played between
// the computer and a user. Your program should ensure that the
// computer always wins. Rules for the game are as follows:
// − There are 21 matchsticks.
// − The computer asks the player to pick 1, 2, 3, or 4
// matchsticks.
// − After the person picks, the computer does its
// picking.
// − Whoever is forced to pick up the last matchstick
// loses the game.
#include <stdio.h>
int main()
{
    int total_sticks = 21;
    while (1)
    {
        printf("number of sticks left:%d\n", total_sticks);
        int number;
        printf("enter the number of sticks you want:");
        scanf("%d", &number);
        if (number > 4 || number < 1)
        {
            printf("enter correct number\n");
        }
        int computer = 5 - number;
        printf("computer picked:%d\n", computer);
        total_sticks = total_sticks - 5;
        if (total_sticks == 1)
        {
            printf("number of sticks left:%d\n", total_sticks);
            printf("you loose");
            break;
        }
    }
}