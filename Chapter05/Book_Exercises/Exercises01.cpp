#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a, b, c;

    printf("Enter any 3 integers\n==> ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c && b > c)
    {
        printf("\t%d, \t%d, \t%d\n", a, b, c);
    } else if (a > b && a > c && c > b)
    {
        printf("\t%d, \t%d, \t%d\n", a, c, b);
    } else if (b > a && b > c && a > c)
    {
        printf("\t%d, \t%d, \t%d\n", b, a, c);
    } else if (b > a && b > c && c > a)
    {
        printf("\t%d, \t%d, \t%d\n", b, c, a);
    } else if (c > a && c > b && a > b)
    {
        printf("\t%d, \t%d, \t%d\n", c, a, b);
    } else if (c > a && c > b && b > a)
    {
        printf("\t%d, \t%d, \t%d\n", c, b, a);
    }
    
    return 0;
    
}