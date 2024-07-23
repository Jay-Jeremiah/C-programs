/*function is a block ofcode that runs only when called
Very important for reusing code.
The basic structure of a C prgram is a function*/

#include <stdio.h>

//create a function
void myfunction(){
    printf("I need to be called to function");
}


int main(){
    //call the function
    myfunction();

    printf("\n");

    //reuse the code 
    myfunction();
    return 0;
}