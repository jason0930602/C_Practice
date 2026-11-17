#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int dealer;
    char size;
    
    srand(time(NULL));

    printf("Enter the odds that the house wins (between 0 and 100) : ");
    scanf("%d", &dealer);

    while (1)
    {
        printf("Guess the size game: L or l means big, S or s means small, 0 or q is the end of the program.\n==>");
        scanf(" %c", &size);

        if (size == '0' || size == 'q')
        {
            break;
        }

        int sum = rand() % 100 + 1;

        int is_win = 0;

        if ((size == 'L' || size == 'l') && sum > 50)
        {
            is_win = 1;
        } else if ((size == 'S' || size == 's') && sum <= 50)
        {
            is_win = 1;
        }
        
        
        if (is_win)
        {
            printf("Congratulations! You got it right.\n");
        } else {
            printf("You answered incorrectly! Please try again.\n");
        }
    }
    system("pause");
    return 0;
}