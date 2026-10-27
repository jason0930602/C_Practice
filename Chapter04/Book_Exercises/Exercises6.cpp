#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int length, n;
    double area;
    double pi = 3.1415926;

    printf("Enter the number of sides of the regular polygon\n==> ");
    scanf("%d", &n);
    printf("Enter the side length of a regular polygon\n==> ");
    scanf("%d", &length);

    area = (n * pow(length, 2)) / (4 * tan(pi / n));

    printf("area ==> %.2lf\n", area);
    return 0;
}