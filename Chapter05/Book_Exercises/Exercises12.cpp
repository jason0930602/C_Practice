#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    double a, b, c;

    printf("Enter 3 side lengths ==> ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        double triangle = a + b + c;
        printf("The perimeter of the triangle is %.1lf\n", triangle);
    } else {
        printf("This is not a triangle!\n");
    }
    system("pause");
    return 0;
}