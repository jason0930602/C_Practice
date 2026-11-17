#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int count = 0;
    int num = 2;

    while (count < 20)
    {
        int is_prime = 1;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            count++;
            printf("%d is the %d prime number.\n", num, count);
        }
        num++;
        
    }
    system("pause");
    return 0;
}