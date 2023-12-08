// Write a program which to find the grace marks for a student
// using switch. The user should enter the class obtained by the
// student and the number of subjects he has failed in.
// − If the student gets first class and the number of subjects he
// failed in is greater than 3, then he does not get any grace.
// If the number of subjects he failed in is less than or equal
// to 3 then the grace is of 5 marks per subject.
// − If the student gets second class and the number of subjects
// he failed in is greater than 2, then he does not get any
// grace. If the number of subjects he failed in is less than or
// equal to 2 then the grace is of 4 marks per subject.
// − If the student gets third class and the number of subjects
// he failed in is greater than 1, then he does not get any
// grace. If the number of subjects he failed in is equal to 1
// then the grace is of 5 marks per subject
#include <stdio.h>
int main()
{
    int class, subject, grace = 0;
    printf("Enter the class obtained by the student:");
    scanf("%d", &class);
    printf("Enter the subjects you are failed:");
    scanf("%d", &subject);
    switch (class)
    {
    case 1:
        if (subject <= 3)
        {
            grace = subject * 5;
        }
        break;

    case 2:
        if (subject <= 2)
        {
            grace = subject * 4;
        }
        break;

    case 3:
        if (subject == 1)
        {
            grace = 5;
        }
        break;

    default:
        printf("Plese enter valid class!\n");
        exit(1);
    }

    printf("Grace marks = %d\n", grace);

    return 0;
}