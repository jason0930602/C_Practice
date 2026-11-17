#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int i;
    int ans;

    srand(10);
    ans = rand() % 10 + 1;
    time_t start_time = time(NULL);

    while (1)
    {
        printf("Enter the number you want to guess.\n==>");
        scanf("%d", &i);

        if (i > ans)
        {
            printf("Please guess smaller!\n");
        } else if (i < ans)
        {
            printf("Please guess higher!\n");
        } else {
            break;
        }
    }
    time_t end_time = time(NULL);
    double total_seconds = difftime(end_time, start_time);
    
    printf("Guess correctly in %.0lf seconds.\n", total_seconds);

    system("pause");
    return 0;
}