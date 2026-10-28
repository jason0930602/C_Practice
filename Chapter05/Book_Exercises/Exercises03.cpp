#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int height, weight;
    float bmi;

    printf("Enter your height (cm) : ");
    scanf("%d", &height);
    printf("Enter your weight (kg) : ");
    scanf("%d", &weight);

    bmi = (float)weight / (pow(height / 100.0, 2));

    if (bmi < 18.5)
    {
        printf("BMI = %.2f underweight!\n", bmi);
    } else if (bmi <= 18.5 || bmi < 24)
    {
        printf("BMI = %.2f healthy weight\n", bmi);
    } else if (bmi <= 24 || bmi < 27)
    {
        printf("BMI = %.2f Overweight\n", bmi);
    } else if (bmi >= 27)
    {
        printf("BMI = %.2f obesity\n", bmi);
    }
    return 0;
}