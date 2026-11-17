//Set the height and print the digital pyramid.//
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int total = 0;

    printf("Enter to set the triangle height ==>");
    scanf("%d", &total);

    for (int i = 1; i <= total; i++)
    {
        for (int j = 1; j <= total - i; j++)
        {
            printf(" ");
        }
        
        int sum = 0;
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
            sum = k;
        }
        
        sum -= 2;
        
        for (int k = 1; k <= i - 1; k++)
        {
            printf("%d", sum + 1);
            sum--;
        }
        
        printf("\n");
    }
    system("pause");
    return 0;
}