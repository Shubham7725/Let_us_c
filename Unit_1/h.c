// If a five-digit number is input through the keyboard, write a
// program to reverse the number.
#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        printf("it is a alphabet");
    }
    else if (character >= 0 && character <= 9)
    {
        printf("it is number");
    }
    else
    {
        printf("it is special symbol");
    }
}