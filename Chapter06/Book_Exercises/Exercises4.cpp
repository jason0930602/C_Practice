#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    //p = principal, n = years, r = rate//

    int p, n;
    double money;
    double rate;

    printf("Enter deposit principal : ");
    scanf("%d", &p);
    printf("Enter deposit years : ");
    scanf("%d", &n);
    printf("Enter annual interest rate : ");
    scanf("%lf", &rate);

    for (int i = 1; i <= n; i++)
    {
        money = p * pow(1 + rate, i);
        printf("Total principal in year %d: %.0lf\n", i, money);
    }
    system("pause");
    return 0;    
}