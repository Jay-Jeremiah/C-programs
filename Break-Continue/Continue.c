/*continue - breaks an iteration in a loop, if a specified condition
occurs, it continues to the next iteration in the loop.*/ 

#include <stdio.h>

int main(){
    int i;

    for (i = 0; i<10; i++){
        if(i==4){
            continue;
        }
        printf("%d\n", i );
    }
    return 0;
}
