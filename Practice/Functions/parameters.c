#include <stdio.h> 

void add(int x, int y){
    int sum = x + y;
    printf("The sum of %d + %d is %d\n", x, y, sum);
}

int main(){
    add(6,8);
    add(32,75);

    return 0;
}