#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926
int main(void)
{
    double C;
    const double RADIUS = 2.0;

    C = 2 * PI * RADIUS;
    printf("圓的周長是: %f\n", C);
    return 0;
}