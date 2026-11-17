#include<stdio.h>
#include<stdlib.h>
int main(void)
{

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9 - i; j++)
        {
           printf("  ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    system("pause");
    return 0;    
}