#include <stdio.h>

int main(){
    int ages[] = {20,22,18};
    printf("%lu",sizeof(ages));
    printf("\n");
    printf("Size of first element");
    printf("\n");
    printf("%lu",sizeof(ages[0]));
    printf("\n");

    printf("%p",&ages);
    return 0;
}