#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 25;
    double gpa = 4.5;
    char grade = 'A';
    char phrase[] = "Win Academy";
    printf("Tom age is %d. He got %0.1f gpa. His grade is %c. He took a course from %s \n", age, gpa, grade, phrase);
    grade = 'B';
    printf("But Helen grade is %c", grade);

    return 0;
}
