#include <stdio.h>

int main(){
    int favNum = 8;

    int* pntr = &favNum;

    printf("%p\n",pntr);

    printf("%d\n",*pntr);
    return 0;
}