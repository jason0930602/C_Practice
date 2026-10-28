#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int days = 0;
    int day;

    printf("Today is Sunday.\n");
    printf("Enter number of days: ");
    scanf("%d", &days);

    if (days < 0)
    {
        printf("Typo!\n");
        exit(0);
    }

    day = days % 7;

    switch (day)
    {
    case 0:
        printf(" %d day later is Sunday.\n", days);
        break;
    case 1:
        printf(" %d day later is Monday.\n", days);
        break;
    case 2:
        printf(" %d day later is Tuesday.\n", days);
        break;
    case 3:
        printf(" %d day later is Wednesday.\n", days);
        break;
    case 4:
        printf(" %d day later is Thursday.\n", days);
        break;
    case 5:
        printf(" %d day later is Friday.\n", days);
        break;
    default:
        printf(" %d day later is Saturday.\n", days);
        break;
    }

    system("pause");
    return 0;
}