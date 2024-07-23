#include <stdio.h>

// written in the parenthesis of the function name separated by a comma 

void myName(char name[], int age){                    //name is the parameter
    printf("Hello %s\n",name);
    printf("How old are you %s?\n",name);
    scanf("%d",&age);
    printf("You are %d years old.\n Thank you",age);
}

int main(){
    myName("Harry", 15);
    return 0;
}