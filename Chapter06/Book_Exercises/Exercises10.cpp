#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int tuition = 50000;
    double tuition_Hike = 0.05;
    int years = 0;

    while (tuition < 60000)
    {
        tuition *= (1 + tuition_Hike);
        years++;       
    }
    printf("Tuition fees will exceed 60,000 after %d years.\n", years);
    
    system("pause");
    return 0;
}