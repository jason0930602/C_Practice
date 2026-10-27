#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int sum = 0;
    double F, C;
    printf("Temperature conversion selection.\n");
    printf("1.Fahrenheit to Celsius.\n");
    printf("2.Celsius to Fahrenheit.\n= ");
    scanf("%d", &sum);

    if (sum == 1)
    {
        printf("Enter Fahrenheit temperature : ");
        scanf("%lf", &F);
        C = (5.0 / 9.0) * (F - 32.0);
        printf("%.1f degrees Fahrenheit equals %.1f degrees Celsius.", F, C);
    } else if (sum == 2)
    {
        printf("Enter Celsius temperature : ");
        scanf("%lf", &C);
        F = (C * 9 / 5) + 32;
        printf("%.1f degrees Celsius equals %.1f degrees Fahrenheit.", C, F);
    } else {
        system("pause");
        exit(0);
    }
    return 0;
}