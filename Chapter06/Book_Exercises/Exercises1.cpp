#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i;

    for ( i = 65; i <= 90; i++)
    {
        printf("%d = %c\t", i, i);
        printf("\n");
    }
    system("pause");
    return 0;
}