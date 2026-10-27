#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int sum = 0;

    printf("Enter any integer value ==> ");
    scanf("%d", &sum);

    if (sum > 0)
    {
        printf("-%d\n", sum);
    } else if (sum == 0)
    {
        printf("%d\n", sum);
    } else if (sum < 0)
    {
        printf("%d\n", abs(sum));
    }
    return 0;
}