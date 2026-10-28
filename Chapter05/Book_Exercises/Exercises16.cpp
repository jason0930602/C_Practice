#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int month = 0;
    printf("Enter month: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("%d month in English is January\n", month);
        break;
    case 2:
        printf("%d month in English is February\n", month);
        break;
    case 3:
        printf("%d month in English is March\n", month);
        break;
    case 4:
        printf("%d month in English is April\n", month);
        break;
    case 5:
        printf("%d month in English is May\n", month);
        break;
    case 6:
        printf("%d month in English is june\n", month);
        break;
    case 7:
        printf("%d month in English is July\n", month);
        break;
    case 8:
        printf("%d month in English is August\n", month);
        break;
    case 9:
        printf("%d month in English is September\n", month);
        break;
    case 10:
        printf("%d month in English is October\n", month);
        break;
    case 11:
        printf("%d month in English is November\n", month);
        break;
    case 12:
        printf("%d month in English is December\n", month);
        break;
    default:
        printf("Incorrect month entered!\n");
        break;
    }
    system("pause");
    return 0;
}