#include <stdio.h>

void circumference(float pi, int rad){
    double area = 2*pi*rad;
    printf("The area is %.2f",area);
}

int main(){
    circumference(3.14,6);
    return 0;
}