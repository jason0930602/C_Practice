#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int starting;
    int ending;
    int sum;
    int d;

    printf("Enter starting value: ");
    scanf("%d", &starting);
    printf("Enter ending value: ");
    scanf("%d", &ending);
    printf("Enter difference value: ");
    scanf("%d", &d);
    sum = (int)((starting + ending) * (ending - starting + d) / (2 * d));
    printf("the sum of the sequence is %d", sum);
    return 0;
}