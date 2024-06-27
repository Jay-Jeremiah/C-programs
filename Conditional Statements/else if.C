#include <stdio.h>

int main(){
    int time = 20;
    if (time < 10){
        printf("Good morning");
    } else if (time < 5){
        printf("It's early");
    } else {
        printf("Good day");
    }
    return 0;
}