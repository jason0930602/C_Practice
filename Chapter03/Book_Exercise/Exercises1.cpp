#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num;

    printf("Enter a Integer: ");
    scanf("%d", &num);

    printf("Octal = %o\n", num);
    printf("Hexadecimal = %x\n", num);
    return 0;
}