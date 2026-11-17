#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    //w = weight, dw = Delta Weight, y = years//

    double w, years;
    double dw;

    w = 50;
    years = 5;
    dw = 1.2;

    for (int i = 1; i <= years; i++)
    {
        w += dw;
        printf("Weight in Year %d: %2.1lf\n", i, w);
    }
    system("pause");
    return 0;    
}