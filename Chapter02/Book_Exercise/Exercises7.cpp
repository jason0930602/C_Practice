#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926
int main(void)
{
    double A, V;
    const double r = 20.0;
    const double h = 30.0;

    A = PI * r * r;
    V = A * h;
    printf("The volume of the cylinder is: %f cubic centimeters.\n", V);
    return 0;
}