#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n;
    int is_prime = 1;
    
    printf("Enter an integer greater than 1 to perform a prime number test : ");
    scanf("%d", &n);

    if (n <= 1)
    {
        is_prime = 0;
    } else if (n == 2)
    {
        is_prime = 1;
    } else {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
            
        }
        
    }
    if (is_prime == 1)
    {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    system("pause");
    return 0;
}