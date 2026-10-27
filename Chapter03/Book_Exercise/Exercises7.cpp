#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char v, w, x, y, z;

    printf("Enter 5 characters\n==>");
    scanf(" %c %c %c %c %c", &v, &w, &x, &y, &z);

    printf("5 characters reverse output is\n==>%c%c%c%c%c", z, y, x, w, v);
    return 0;
}