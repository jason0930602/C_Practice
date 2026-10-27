//Calculate the distance from the Palace Museum in Beijing to the Louvre Museum in Paris, France.//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    double x1, y1;
    double x2, y2;
    double d;
    double pi = 3.1415926;
    double r = 6371;

    x1 = 39.9196;
    y1 = 116.3669;
    x2 = 48.8595;
    y2 = 2.3369;

    d = r * acos(sin(x1 * 2 * pi / 360) * sin(x2 * 2 * pi / 360) + \
                 cos(x1 * 2 * pi / 360) * cos(x2 * 2 * pi / 360) * \
                 cos((y1 - y2) * 2 * pi / 360));
    
    printf("distance --> %.2lf\n", d);
    return 0;
}