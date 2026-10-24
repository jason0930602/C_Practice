//Goods checkout output device//

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    double Price, Discount, total;
    int Quantity;

    printf("Enter Item Price: ");
    scanf("%lf", &Price);
    printf("Enter Item Quantity: ");
    scanf("%d", &Quantity);
    printf("Enter  Discount Rate (e.g. 0.85): ");
    scanf("%lf", &Discount);
    printf("=======================================\n");
    total = Price * Quantity * Discount;
    printf("Total Price: $%.2lf\n", total);
    printf("=======================================\n");

    return 0;
}