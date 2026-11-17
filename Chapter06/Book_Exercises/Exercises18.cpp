//Armstrong number//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    for (int i = 100; i <= 999; i++)
    {
        int Hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;

        if (round(pow(Hundreds, 3) + pow(tens, 3) + pow(units, 3)) == i)
        {
            printf("%d\n", i);
        }
        
    }
    system("pause");
    return 0;
}