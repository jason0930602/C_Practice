#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    double x1, y1;
    double x2, y2;
    double d;
    int r;

    r = 20;
    x1 = 0.00;
    x2 = 0.00;

    printf("Enter any x, y coordinates ==> ");
    scanf("%lf %lf", &x2, &y2);

    d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    if (d < r)
    {
        printf("The coordinate point (%.2lf, %.2lf) are inside the circle", x2, y2);
    } else {
        printf("The coordinate point (%.2lf, %.2lf ) is not inside the circle", x2, y2);
    }
    return 0;
}