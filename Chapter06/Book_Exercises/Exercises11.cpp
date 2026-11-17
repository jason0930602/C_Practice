#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    double num = 0;
    double num2 = 0;
    double sum = 0;
    int count = 0;
    do
    {
        printf("Enter the starting integer : ");
        scanf("%lf", &num);
        printf("Enter the endpoint integer : ");
        scanf("%lf", &num2);
        
        for (double i = num; i < num2 + 1; i++)
        {
            if (num > num2)
            {
                break;
            } else {
                sum += i;
                count = i;
            }
            
        }
    } while (num > num2);
    printf("sum = %.0lf\n", sum);
    system("pause");
    return 0;
}