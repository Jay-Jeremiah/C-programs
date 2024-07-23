#include <stdio.h>

void area(pi,rad){
    pi = 3.14;
    printf("Enter the raduis of the circle");
    scanf("%d",&rad);

    double area = 2*pi*rad;
    printf("The area of the circle is: %.2f", area);
}

int main(){
    area();
    return 0;
}