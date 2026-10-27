#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    double v, a, d;

    printf("Enter acceleration a and velocity v\n==> ");
    scanf("%lf %lf", &a, &v);

    d = (pow(v, 2)) / (2 * a);
    printf("distance --> %.2lf m\n", d);
    return 0;
}