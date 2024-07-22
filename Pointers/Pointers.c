#include <stdio.h>

int main(){
    char name[] = "Harry Jay";
    
    char* ptr = &name;

    printf("%s\n",name);       //outputs the value of name

    printf("%p\n",&name);      //outputs the memory address of the value of variable name

    printf("%p\n",ptr);        //outputs the memory address of the value of variable name

    return 0;

}