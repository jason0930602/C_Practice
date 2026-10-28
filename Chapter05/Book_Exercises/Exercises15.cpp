#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int market_x = 40;
    int market_y = 80;
    int editor_x = 80;
    int editor_y = 60;
    int employ_x;
    int employ_y;
    double m_dist, e_dist;
    
    printf("Enter English test results : ");
    scanf("%d", &employ_x);
    printf("Enter Social Exam Results : ");
    scanf("%d", &employ_y);

    m_dist = pow(pow(market_x - employ_x, 2) + pow(market_y - employ_y, 2), 0.5);
    e_dist = pow(pow(editor_x - employ_x, 2) + pow(editor_y - employ_y, 2), 0.5);
    printf("Differences between new employees and the editorial department %5.2lf\n", e_dist);
    printf("Differences between new hires and the marketing department %5.2lf\n", m_dist);
    if (m_dist > e_dist)
    {
        printf("New employees are better suited for the editorial department.\n");
    } else {
        printf("New hires are better suited for the marketing department.\n");
    }
    system("pause");
    return 0;
}