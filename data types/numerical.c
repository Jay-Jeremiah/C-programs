/*numerical data types include int, float, and double*/

#include <stdio.h>

int main(){
    int num1 = 56;              //int are numbers without decimals
    printf("%d\n",num1);

    float num2 = -7.7;           //float are numbers with decimals
    printf("%f\n",num2);

    double num3 = 56.87;          //double are also numbers with decimals
    printf("%lf\n",num3);

    float num4 = 14e3;
    printf("%f\n",num4);

    double num5 = 65e-6;
    printf("%lf\n",num5);

    return 0;

}