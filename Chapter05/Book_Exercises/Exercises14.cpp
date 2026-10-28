#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int guess;
    int count = 0;
    int answer1 = 3;
    int answer2 = 7;
    int answer3 = 5;

    start1:
        printf("Please guess a single number between 1 and 100: ");
        scanf("%d", &guess);
        
        count++;
        if (guess == answer1)
            goto start2;
        goto start1;
    start2:
        printf("Please guess a single number between 1 and 100: ");
        scanf("%d", &guess);
        
        count++;
        if (guess == answer2)
            goto start3;
        goto start2;
    start3:
        printf("Please guess a single number between 1 and 100: ");
        scanf("%d", &guess);
        
        count++;
        if (guess == answer3)
            goto stop;
        goto start3;
    stop:
        printf("Congratulations, you got it right!\n");
        printf("I guessed a total of %d times.\n", count);
        system("pause");
        return 0;
}