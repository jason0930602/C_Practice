#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x , y, z, s;

    x = 10;
    y = 18;
    z = 5;
    
    s = x + y;
    printf("(a) = %d\n", s);

    s = 2 * x + 3 - z;
    printf("(b) = %d\n", s);

    s = y * z + 20 / y;
    printf("(c) = %d\n", s);

    s = -x + z - 3;
    printf("(d) = %d\n", s);

    return 0;
}