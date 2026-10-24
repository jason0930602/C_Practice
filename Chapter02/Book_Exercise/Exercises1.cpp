#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d, e;
    a = 0x38;
    b = 036;
    c = 077;
    d = 0x75;
    e = 0xEE;

    printf("a = %u\n", a);
    printf("b = %u\n", b);
    printf("c = %u\n", c);
    printf("d = %u\n", d);
    printf("e = %u\n", e);

    return 0;
}