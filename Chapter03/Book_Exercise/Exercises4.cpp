#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int km, total_miles, yard;
    float miles;

    printf("Km to miles and yards\n");
    printf("Enter Km\n==>");
    scanf("%d", &km);

    miles = km / 1.609;
    total_miles = (int)miles;
    yard = (miles - total_miles) * 1760;
    
    printf("result = %d miles\n", total_miles);
    printf("result = %d yard\n", yard);
    return 0;
}