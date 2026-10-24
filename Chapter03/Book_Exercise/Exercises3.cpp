#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float a, b, c, sum, average;

    printf("Enter three Float less than 100\n==>");
    scanf("%f %f %f", &a, &b, &c);

    sum = a + b + c;
    average = (a + b + c) / 3;

    printf("The sum is = %5.2f\n", sum);
    printf("On average is = %5.2f\n", average);
    return 0;
}