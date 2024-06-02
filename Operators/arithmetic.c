#include <stdio.h>

int main(){
    //subtraction
    int birthYear = 2002;
    int currentYear = 2024;
    int age = currentYear - birthYear;
    printf("You are %d years old\n",age);

    //sum 
    int sweet = 500;
    int honey= 6000;
    int sugar = 4000;
    char currency[] = "shs";

    int sum = sweet+honey+sugar;
    printf("The expenditure is %s %d\n",currency,sum);

    //product
    int diameter = 7;
    const float pi = 3.14;
    const float product = (float) pi*diameter;
    printf("The circumference is %.2f\n",product);

    //divison
    float radius = product/(2*pi);
    printf("The radius is %.2f",radius);

    return 0;
}