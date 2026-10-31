#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int count, num;
    int sum = 0;

    printf("Enter the starting integer : ");
    scanf("%d", &num);
    printf("Enter the endpoint integer : ");
    scanf("%d", &count);

    for (int i = num; i <= count; i++)
    {
        sum += i;
    }
    printf("sum = %d\n", sum);
    system("pause");
    return 0;
}