#include <stdio.h>

void area(float pi, int rad){
    double area = 2*pi*rad;
    printf("The area is %.2f",area);
}

int main(){
    area(3.14,6);
    return 0;
}