#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char name[10];
    char school[15];
    char deportment[15];

    printf("Enter your name\n==>");
    scanf("%s", &name);
    printf("Enter your school\n==>");
    scanf("%s", &school);
    printf("Enter your deportment\n==>");
    scanf("%s", &deportment);

    printf("hi Welcome to %s\n", name);
    printf("%s\n", school);
    printf("%s\n", deportment);
    return 0;
}