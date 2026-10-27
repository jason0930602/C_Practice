#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    double x1, y1, x2, y2, x3, y3;
    double dist1, dist2, dist3;
    double p;
    double area;

    printf("Enter the coordinates of the first point\n==> ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point\n==> ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the coordinates of the third point\n==> ");
    scanf("%lf %lf", &x3, &y3);

    dist1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    dist2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    dist3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    p = (dist1 + dist2 + dist3) / 2;
    area = sqrt(p * ((p - dist1) * (p - dist2) * (p - dist3)));

    printf("Area of ​​triangle ==> %.2lf\n", area);
    return 0;
}