// Any character is entered through the keyboard, write a
// program to determine whether the character entered is a
// capital letter, a small case letter, a digit or a special symbol.
// The following table shows the range of ASCII values for
// various characters.
// Characters ASCII Values
// A – Z
// a – z
// 0 – 9
// special symbols
// 65 – 90
// 97 – 122
// 48 – 57
//  0 - 47, 58 - 64, 91 - 96, 123 - 127

#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90)
    {
        printf("capital letter");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("smallletter");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("digit");
    }
    else
        printf("special symbol");
}