#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    double x1, y1;
    double x2, y2;
    double d;
    double r = 6371;
    double pi = 3.1415926;

    printf("Enter the latitude and longitude of the first location\n==> ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the latitude and longitude of the second location\n==> ");
    scanf("%lf %lf", &x2, &y2);

    d = r * acos(sin(x1 * 2 * pi / 360) * sin(x2 * 2 * pi / 360) + \
                cos(x1 * 2 * pi / 360) * cos(x2 * 2 * pi / 360) * \
                cos((y1 - y2) * 2 * pi / 360));
    
    printf("distance --> %.2lf\n", d);
    return 0;
}