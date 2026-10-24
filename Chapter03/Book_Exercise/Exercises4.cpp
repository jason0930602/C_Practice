#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int km, total_miles;
    float miles, yard;

    printf("Km to miles and yards\n");
    printf("Enter Km\n==>");
    scanf("%d", &km);

    miles = km / 1.609;
    total_miles = (int)miles - miles;
    yard = total_miles * 1760;
    
    printf("result = %d miles\n", total_miles);
    printf("result = %d yard\n", yard);
    return 0;
}