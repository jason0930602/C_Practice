#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int days;
    int day;

    printf("Today is Sunday.\n");
    printf("Enter number of days: ");
    scanf("%d", &days);

    day = days % 7;

    if (day == 0)
    {
        printf(" %d day later is Sunday.\n", days);
    } else if (day == 1)
    {
        printf(" %d day later is Monday.\n", days);
    } else if (day == 2)
    {
        printf(" %d day later is Tuesday.\n", days);
    } else if (day == 3)
    {
        printf(" %d day later is Wednesday.\n", days);
    } else if (day == 4)
    {
        printf(" %d day later is Thursday\n", days);
    } else if (day == 5)
    {
        printf(" %d day later is Friday\n", days);
    } else {
        printf(" %d day later is Saturday\n", days);
    }
    system("pause");
    return 0;    
}