#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    while (1)
    {
        char ch[50];
        printf("In the human-computer dialogue column, please tell me your favorite fruit!\n");
        printf("Type 'q' to end the conversation.\n==>");
        scanf("%s", ch);

        if (strcmp(ch, "q") == 0)
        {
            break;
        } else {
            printf("I also like to eat %ss.\n", ch);
        }
    }
    system("pause");
    return 0;
}