#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c ", ch);
    }
    printf("\n");
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c ", ch);
    }
    system("pause");
    return 0;
}