#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
void checkGradeStatus(char grade){
    switch(grade){
    case 'A':
        printf("You did great\n");
        break;
    case 'B':
        printf("you did alright\n");
        break;
    case 'C':
        printf("you have improve\n");
        break;
    case 'F':
        printf("you have failed this exam\n");
        break;
    default:
        printf("Invalid\n");
    }
}
int main()
{
    checkGradeStatus('A');
    checkGradeStatus('F');
    checkGradeStatus('M');
    return 0;
}
