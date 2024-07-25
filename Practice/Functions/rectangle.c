#include <stdio.h>

void rectangle_perimeter(double length,double width){

    double perimeter = 2*(length+width);

    printf("The perimeter of the rectangle is %.2f",perimeter);
   
}

void rectangle_area(double length,double width){

    double area = (length*width);

    printf("The area of the rectangle is %.2f",area);
   
}


int main(){
    rectangle_perimeter(2.7,3.6);
    printf("\n");
    rectangle_area(2.7,3.6);
    printf("\n");
    return 0;
}