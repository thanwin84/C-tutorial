#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
struct Student{
    char name[50];
    char group[50];
    int age;
    double gpa;
};
int main()
{
    struct Student student1;
    student1.age = 24;
    student1.gpa = 3.5;
    strcpy(student1.name, "Than Win Hline");
    strcpy(student1.group, "Science");
    printf("%d\n", student1.age);
    printf("%s\n", student1.group);
    printf("%lf\n", student1.gpa);
    return 0;
}
