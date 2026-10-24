#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a, b, c, sum;
    float average;

    printf("Enter three integers less than 100\n==>");
    scanf("%d %d %d", &a, &b, &c);
    
    sum = a + b + c;
    average = (float)(a + b + c) / 3;
    printf("The sum is ==> %d\n", sum);
    printf("On average is ==> %5.2f\n", average);
    return 0;
}