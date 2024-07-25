#include <stdio.h>

void rectangle_cals(double length,double width){

    double perimeter = 2*(length+width);

    printf("The perimeter of the rectangle is %.2f\n",perimeter);
   
    double area = (length*width);

    printf("The area of the rectangle is %.2f\n",area);
}


int main(){
    rectangle_cals(3.8,1.9);
    return 0;
}