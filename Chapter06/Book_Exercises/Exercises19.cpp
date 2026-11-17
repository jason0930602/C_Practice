//Alphabet Pyramid//
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int total = 10;

    for (int i = 1; i <= total; i++)
    {
        for (int j = 1; j <= total - i; j++)
        {
            printf(" ");
        }

        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c", ch);
            ch++;
        }
        
        ch -= 2;
        for (int k = 1; k <= i - 1; k++)
        {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
        
    }
    system("pause");
    return 0;
}