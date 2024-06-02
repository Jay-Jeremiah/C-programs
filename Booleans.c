#include <stdio.h>
//also include the boolean library
#include <stdbool.h>

int main(){
    bool isCodingGood = true;
    bool isCodingBad = false;

    printf("%d\n",isCodingGood);  //returns 1 when statement is true

    printf("%d\n",isCodingBad);   //returns 0 when statement is false

    int x = 10;
    int y = 9;
    printf("%d\n",x > y);
    
    return 0;

}