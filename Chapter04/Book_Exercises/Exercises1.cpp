//Compound interest calculation//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    double money;
    
    money = 100000 * pow(1 + 0.02, 10);

    printf("Total principal after 10 years --> %.2lf\n", money);
    return 0;
}