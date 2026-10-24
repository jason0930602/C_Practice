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
    printf("蘋果可以吃 %d 天\n", day);
    printf("第 %d 天會產生蘋果不足\n",day + 1);
    printf("蘋果會不足 %d 顆\n", insufficient);
    return 0;
}