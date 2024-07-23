#include <stdio.h>

// written in the parenthesis of the function name separated by a comma 

void myName(char name[]){
    printf("Hello %s\n",name);
}

int main(){
    myName("Harry");
    myName("Jay");
    myName("Jeremiah");
    return 0;
}