// In a company, worker efficiency is determined on the basis of
// the time required for a worker to complete a particular job. If
// the time taken by the worker is between 2 – 3 hours, then the
// worker is said to be highly efficient. If the time required by
// the worker is between 3 – 4 hours, then the worker is ordered
// to improve speed. If the time taken is between 4 – 5 hours, the
// worker is given training to improve his speed, and if the time
// taken by the worker is more than 5 hours, then the worker has
// to leave the company. If the time taken by the worker is input
// through the keyboard, find the efficiency of the worker.
#include <stdio.h>
int main()
{
    int hour;
    printf("Enter the working hour of a worker : ");
    scanf("%d", &hour);
    if (hour >= 2 && hour < 3)
        printf("The worker is highly efficient");
    else if (hour >= 3 && hour < 4)
        printf("The worker is ordered to improve is speed");
    else if (hour >= 4 && hour <= 5)
        printf("The worker is given training to improve his speed");
    else
        printf("The worker will leave the company");
}