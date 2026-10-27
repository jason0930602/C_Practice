//Two-point coordinates//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    double dist1, dist2;
    double x1, y1, x2, y2, x3, y3;
    
    x1 = 0.00;
    y1 = 0.00;
    x2 = 1.00;
    y2 = 8.00;
    x3 = 3.00;
    y3 = 10.00;

    dist1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    dist2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    printf("Distance between coordinates (1, 8) and (0, 0) --> %.2lf\n", dist1);
    printf("Distance between coordinates (3, 10) and (0, 0) --> %.2lf\n", dist2);
    return 0; 
}