// If the marks obtained by a student in five different subjects
// are input through the keyboard, find out the aggregate marks
// and percentage marks obtained by the student. Assume that
// the maximum marks that can be obtained by a student in each
// subject is 100.
#include <stdio.h>
int main()
{
    float a, b, c, d, e, f, g;
    printf("Enter marks in first Subject:\n");
    scanf("%f", &a);
    printf("Enter marks in Second Subject:\n");
    scanf("%f", &b);
    printf("Enter marks in third Subject:\n");
    scanf("%f", &c);
    printf("Enter marks in fourth Subject:\n");
    scanf("%f", &d);
    printf("Enter marks in fifth Subject:\n");
    scanf("%.2f", &e);
    f = a + b + c + d + e;
    printf("Aggregate marks : %.2f\n", f);
    g = (f / 500) * 100;
    printf("percentage marks : %.2f", g);
}