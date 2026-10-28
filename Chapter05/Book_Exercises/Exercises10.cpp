#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a, b, c;
    printf("Enter any two numbers ==> ");
    scanf("%d %d", &a, &b);
    
    c = (a < b) ? a : b;
    printf("The smaller value is %d\n", c);
    system("pause");
    return 0;
}