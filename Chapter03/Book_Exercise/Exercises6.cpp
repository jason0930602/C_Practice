#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    //hrs = Working Hours, rate = Hourly wage, net = Net Income, tax = Tax Amount//
    //10% is tax//
    int hrs, wage, net, tax;

    printf("Enter working hours\n==>");
    scanf("%d", &hrs);
    printf("Enter hourly wage\n==>");
    scanf("%d", &wage);
    tax = (hrs * wage) * 0.1;
    net = (hrs * wage) - tax;

    printf("Net Income = %d\n", net);
    printf("Tax Amount = %d\n", tax);
    return 0;
}