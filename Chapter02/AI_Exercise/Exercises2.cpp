//scanf//

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int id;
    float score;

    printf("Enter student ID: ");
    scanf("%d", &id);
    printf("Enter Exam score: ");
    scanf("%f", &score);
    printf("--> Student ID: %d, Score: %.2f", id, score);
    return 0;
}