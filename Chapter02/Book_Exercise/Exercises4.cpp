#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s, y;
    float x;
    x = 3.5;
    y = 4;
    
    s = x + y;
    printf("(a) = %d\n", s);

    s = -x + y - 8;
    printf("(b) = %d\n", s);

    s = x / y - 10;
    printf("(c) = %d\n", s);

    s = x * y + 3.8;
    printf("(d) = %d\n", s);

    s = 'B' - 'R';
    printf("(e) = %d\n", s);
    return 0;
}