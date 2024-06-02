#include <stdio.h>

int main(){
    int item = 50;

    float unit_price = 9.99;

    char currency = '$';

    float totalCost = item * unit_price;

    printf("The total is: %c %.2f",currency,totalCost);

    return 0;

}