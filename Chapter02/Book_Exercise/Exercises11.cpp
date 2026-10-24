#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int x, y, z;
    x = y = z = 5;

    x -= ++y + z--;
    printf("a(x) = %d\n", x);

    x = y = z = 5;
    
    x *= y - z--;
    printf("b(x) = %d\n", x);
    
    x = y = z = 5;

    x /= 2 + y++ - z++;
    printf("c(x) = %d\n", x);
    
    return 0;
}