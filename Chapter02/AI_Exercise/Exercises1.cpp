//Polymorphic variable declaration and precise formatted output//

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int age = 20;
    double height = 175.35;
    char gender_grade = 'A';

    printf("Age:\t%d\t|\tHeight:\t%.2f\t|\tGrade:\t%c", age, height, gender_grade);
    return 0;
}