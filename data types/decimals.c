#include <stdio.h>

int main(){
    float decimal = 56.789;

    printf("%f\n",decimal);  //prints 6 digits after decimal point.

    printf("%.1f\n",decimal);  //prints 1 digit after decimal point

    printf("%.2f\n",decimal);  //prints 2 digits after decimal point

    return 0;
}