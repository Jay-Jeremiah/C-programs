#include <stdio.h>

int main(){
    // pointers can also be used in arrays

    int myNums[3] = {24,67,79};

    printf("%p\n", myNums);        //memory address of the list is the same as the address of the first element in the list.

    printf("%p\n",&myNums[0]);

    printf("%p\n",&myNums[1]);
    return 0;

}