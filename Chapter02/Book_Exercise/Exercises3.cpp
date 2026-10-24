#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x , y, z, s;

    x = 10.0;
    y = 1.0;
    z = 5.0;
    
    s = x + y;
    printf("(a) = %5.2f\n", s);

    s = 2 * x + 3 - z;
    printf("(b) = %5.2f\n", s);

    s = y * z + 20 / y;
    printf("(c) = %5.2f\n", s);

    s = -x + z - 3;
    printf("(d) = %5.2f\n", s);

    return 0;
}