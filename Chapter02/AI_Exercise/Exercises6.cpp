//Input buffer handling and continuous input techniques//

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num;
    char ch;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a char: ");
    scanf(" %c", &ch);
    printf("Number: %d, char: %c\n", num, ch);
    return 0;
}