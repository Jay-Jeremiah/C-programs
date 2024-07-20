/* sizeof - get the array size*/

#include <stdio.h>

int main(){
    int myNumbers[] = {20, 10, 50, 56};
    printf("%lu", sizeof(myNumbers));
    printf("\n");

    printf("%lu",sizeof(myNumbers[0]));
    printf("\n");

    int length = sizeof(myNumbers) /sizeof(myNumbers[0]);

    printf("%d",length);
    


    return 0;

}