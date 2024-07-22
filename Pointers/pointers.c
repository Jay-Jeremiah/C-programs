/*Memory Address is assigned to every variable created in C.
It is stored  in hexadecimal form.
This is the location where the variable is stored on the computer*/

// To access it, use the operator & where the variable is stored.

#include <stdio.h>


int main(){
    int myAge = 21;
    printf("%d",myAge);  //outputs the value of myAge

    //pointer
    printf("%p",&myAge);  //outputs the memory address of myAge
    return 0;
}

