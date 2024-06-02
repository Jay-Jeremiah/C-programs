#include <stdio.h>

/*type conversion is where numbers are converted from one
data type to another data type.*/

int main(){
    //implicit type conversion: float to int
    int num1 = 9.99;
    printf("%d\n",num1);  //output is 9

    //int to float
    float num2 = 65;
    printf("%.2f\n",num2);   //output is 65.00

    //explicit conversion: int to float
    int a = 5;
    int b = 6;
    float division = (float) a/b;

    printf("%.1f\n",division);

    //float to int
    float numerator= 5.7;
    float denominator = 2.5;
    int division2 = (int) numerator/denominator;

    printf("%d",division2);

    return 0;

}