//This topic will be put on hold for now.//
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    double wage = 160.0;
    double hours;
    double salary = 0;

    printf("Enter the number of working hours to calculate your weekly wage.");
    printf("Enter this week's working hours : ");
    scanf("%lf", &hours);

    if (hours < 40)
    {
        salary = hours * (wage * 0.8);
    } else if (hours == 40)
    {
        salary = hours * wage;
    } else if (hours > 40 && hours <= 50)
    {
        salary = hours * (wage * 1.2);
    } else if (hours > 50)
    {
        salary = hours * (wage * 1.6);
    }
    printf("salary = %.0lf\n", salary);
    return 0;
}