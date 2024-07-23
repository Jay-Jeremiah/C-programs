#include <stdio.h>

int main(){
    int figures[] = {23,26,89};
    int *ptr = figures;
    int i;

    for(i=0;i<4;i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}