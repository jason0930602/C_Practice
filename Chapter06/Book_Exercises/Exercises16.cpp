#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float e = 1.0;
    float val = 1.0;
    

    
    for (int i = 1; i <= 10; i++)
    {
        val /= i;
        e += val;
        printf("when i = %2d, e = %16.15f\n", i, e);
    }
    system("pause");
    return 0;
}