//Virus quantity calculation//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    double virus;

    virus = 100 * (pow(1 + 0.2, 24));

    printf("Virus count after 1 day --> %d\n", (int)floor(virus));
    return 0;
}