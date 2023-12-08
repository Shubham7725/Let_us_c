// Write a menu driven program which has following options:
//  1. Factorial of a number.
// 2. Prime or not
// 3. Odd or even
// 4. Exit
// Make use of switch statement.
// The outline of this program is given below:
// /* A menu driven program */
// main( )
// {
//  int choice ;
//  while ( 1 )
//  {
//  printf ( "\n1. Factorial" ) ;
//  printf ( "\n2. Prime" ) ;
//  printf ( "\n3. Odd/Even" ) ;
//  printf ( "\n4. Exit" ) ;
//  printf ( "\nYour choice? " ) ;
//  scanf ( "%d", &choice ) ;
//  switch ( choice )
//  {
//  case 1 :
//  /* logic for factorial of a number */
//  break ;
//  case 2 :
//  /* logic for deciding prime number */
//  break ;
//  case 3 :
//  /* logic for odd/even */
//  break ;
//  case 4 :
//  exit( ) ;
//  }
//  }
// }
// Note:
// The statement while ( 1 ) puts the entire logic in an infinite loop.
// This is necessary since the menu must keep reappearing on the
// screen once an item is selected and an appropriate action taken.
#include <stdio.h>
int main()
{
    int choice;
    int go = 1;
    while (go != 0)
    {
        printf("\n1. Factorial");
        printf("\n2. Prime");
        printf("\n3. Odd/Even");
        printf("\n4. Exit");
        printf("\nYour choice? ");
        scanf("%d", &choice);
        switch (choice)
        {
            int number;
        case 1:
            /* logic for factorial of a number */
            printf("Enter a number you want factorial:");
            scanf("%d", &number);
            int result = 1;
            for (int i = 1; i <= number; i++)
            {
                result = i * result;
            }
            printf("%d", result);
            break;
        case 2:
            /* logic for deciding prime number */
            printf("Enter a number you want to know prime or not prime:");
            scanf("%d", &number);
            if (number == 2)
            {
                printf("No is prime");
            }
            else
            {
                int factor = 2;
                for (int i = 2; i < number; i++)
                {
                    if (number % i == 0)
                    {
                        factor++;
                    }
                }
                if (factor == 2)
                {
                    printf("No is prime");
                }
                else
                    printf("Not prime");
            }
            break;
        case 3:
            /* logic for odd/even */
            printf("Enter a number you want to know even or odd:");
            scanf("%d", &number);
            if (number % 2 == 0)
            {
                printf("no. is even");
            }
            else
                printf("No is odd");
            break;
        case 4:
            go = 0;
            break;
        default:
            printf("enter a right choice");
            break;
        }
    }
}