#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num = 0;
    int sum;

    while (1)
    {        
        printf("Enter a number : ");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }
        
        sum += num;
    }
    
    printf("Enter total: %d\n", sum);
    system("pause");
    return 0;
}