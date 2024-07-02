#include <stdio.h>

int main(){
    int i = 45;
    while (i < 60){
        if(i == 56) {
            continue;
            i++;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}