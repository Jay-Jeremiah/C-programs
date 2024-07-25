#include <stdio.h>

void circle_cals(double rad){
    const double pi = 3.14;

    double circumference = 2*pi*rad;

    printf("The circumference of the circle is %.2f\n",circumference);

    double area = 2*pi*rad*rad;
    printf("The area of a circle is %.2f\n",area); 
}

int main(){
    circle_cals(7.67);
    return 0;
}