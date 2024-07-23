#include <stdio.h>

int main(){
    float figures[] = {0.01,6.75,8.9};

    *figures = 13;                     //changes the first element to 13

    *(figures +1) = 17;                     //changes the second element to 17

    printf("%f\n",*figures);              //outputs the value of the first element

    printf("%f\n",*(figures +1));

    return 0;
}