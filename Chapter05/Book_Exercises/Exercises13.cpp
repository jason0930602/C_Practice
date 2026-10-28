#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int ans = 0;
    char num;
    printf("Guess your birthday! Answer the following 5 questions and the program will list your birthday.\n");
    printf("Did you see your own birthday date?\n");
    printf("1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31\n");
    printf("Enter y or Y to indicate yes, other options indicate no: ");
    scanf(" %c", &num);

    if ((num == 'y') || (num == 'Y'))
    {
        ans += 6;
    }
    
    printf("Guess your birthday! Answer the following 5 questions and the program will list your birthday.\n");
    printf("Did you see your own birthday date?\n");
    printf("2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31\n");
    printf("Enter y or Y to indicate yes, other options indicate no: ");
    scanf(" %c", &num);

    if ((num == 'y') || (num == 'Y'))
    {
        ans += 6;
    }

    printf("Guess your birthday! Answer the following 5 questions and the program will list your birthday.\n");
    printf("Did you see your own birthday date?\n");
    printf("4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31\n");
    printf("Enter y or Y to indicate yes, other options indicate no: ");
    scanf(" %c", &num);

    if ((num == 'y') || (num == 'Y'))
    {
        ans += 6;
    }

    printf("Guess your birthday! Answer the following 5 questions and the program will list your birthday.\n");
    printf("Did you see your own birthday date?\n");
    printf("8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31\n");
    printf("Enter y or Y to indicate yes, other options indicate no: ");
    scanf(" %c", &num);

    if ((num == 'y') || (num == 'Y'))
    {
        ans += 6;
    }

    printf("Guess your birthday! Answer the following 5 questions and the program will list your birthday.\n");
    printf("Did you see your own birthday date?\n");
    printf("16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31\n");
    printf("Enter y or Y to indicate yes, other options indicate no: ");
    scanf(" %c", &num);

    if ((num == 'y') || (num == 'Y'))
    {
        ans += 6;
    }

    printf("The reader's date of birth is: %d\n", ans);
    system("pause");
    return 0;
}