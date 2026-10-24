// const & #define//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159
int main(void)
{
    const double RADIUS = 5.0;
    double perimeter = 2 * PI * RADIUS;
    double area = PI * RADIUS * RADIUS;
    printf("Radius: %.3f\n", RADIUS);
    printf("Circumference: %.3f\n", perimeter);
    printf("Area: %.3f\n", area);
    return 0;
}