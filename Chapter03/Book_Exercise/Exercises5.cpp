#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int C;
    float F;

    printf("Enter Celsius temperature: ");
    scanf("%d", &C);

    F = (float)(C * 9 / 5) + 32;

    printf("integer Fahrenheit temperature is %d\n", (int)F);
    printf("Float Fahrenheit temperature is %5.2f\n", F);
    return 0;

}