#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int apple, student, day, days, insufficient;

    apple = 100;
    student = 23;

    day = apple / student;
    days = apple % student;
    insufficient = student - days;
    printf("Apples can be eaten for %d days\n", day);
    printf("On %d day, there will be an apple shortage.\n",day + 1);
    printf("There will be less than %d apples.\n", insufficient);
    return 0;
}