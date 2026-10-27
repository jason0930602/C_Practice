#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float v, a;
    double distance;

    printf("Enter acceleration: ");
    scanf("%f", &a);
    printf("Enter speed: ");
    scanf("%f", &v);

    distance = (v * v) / (2 * a);

    printf("distance = %5.1f\n", distance);
    return 0;
}