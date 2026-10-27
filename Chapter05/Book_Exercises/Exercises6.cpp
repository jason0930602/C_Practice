#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int money = 100;
    int age = 0;
    float Discount = 0.0;

    printf("Calculate ticket price.\n");
    printf("Enter you age: ");
    scanf("%d", &age);

    if (age <= 6 || age >= 80)
    {
        Discount = money * 0.2;
        printf("The ticket price is %.1f\n", Discount);
    } else if ((age >= 7 && age <= 12) || (age >= 60 && age <=79))
    {
        Discount = money * 0.5;
        printf("The ticket price is %.1f\n", Discount);
    } else {
        printf("The ticket price is  %.1f\n", (float)money);
    }
    return 0;
}