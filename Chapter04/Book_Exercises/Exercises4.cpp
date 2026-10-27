#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    double x1, y1, x2, y2;
    double dist;

    printf("Enter the coordinates of the first point\n==> ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point\n==> ");
    scanf("%lf %lf", &x2, &y2);

    dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("2-point coordinate distance ==> %.2lf\n", dist);
    return 0;
}