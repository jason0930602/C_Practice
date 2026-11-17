#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num2 = 10;

    while (1)
    {
        for (int i = 1; i <= num2; i++)
        {
            if (i > num2)
            {
                break;
            }
            if (i % 2 != 0)
            {
                continue;
            } else {
                printf("%d\n", i);
            }

        }
        break;
    }
    system("pause");
    return 0;
}