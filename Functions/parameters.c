#include <stdio.h>

// written in the parenthesis of the function name separated by a comma 

void myName(char name[]){                    //name is the parameter
    printf("Hello %s\n",name);
}

int main(){
    myName("Harry");
    myName("Jay");
    myName("Jeremiah");
    return 0;
}