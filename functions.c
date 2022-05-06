#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
void greetings(char name[]){
    printf("Good morning %s\n", name);
}
int addTwoNum(int first, int second){
    return first + second;
}
int getMax(int first, int second){
    int result;
    if (second > first){
        result = second;
    }
    else {
        result = first;
    }
    return result;
}
int maxOfThree(int first, int second, int third){
    int result;
    if (first >= second && first >= third){
        result = first;
    }
    else if (second >= first && second >= third){
        result = second;
    }
    else {
        result = third;
    }
    return result;
}

int main()
{
    bool flag = true;
    printf("%s", flag ? "True" : "False");


    return 0;
}
