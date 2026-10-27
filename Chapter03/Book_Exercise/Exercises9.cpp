#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int dist, speed;
    int total_hour, days, hours;

    dist = 384400;
    speed = 1225;

    total_hour = dist / speed;
    days = total_hour / 24;
    hours = total_hour % 24;

    int minutes = (dist * 60 / speed) % 60; 
    int seconds = (dist * 3600 / speed) % 60; 

    // 印出結果
    printf("days = %d\n", days);
    printf("hours = %d\n", hours);
    printf("minutes = %d\n", minutes);
    printf("seconds = %d\n", seconds);

    return 0;
}