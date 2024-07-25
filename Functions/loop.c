#include <stdio.h>

void Num(int numeros[5]){
    for(int i =0; i<5; i++){
        printf("%d\n",numeros[i]);
    }
}

int main(){
    int figures[5] = {25,76,43,91,73};
    Num(figures);
    
    return 0;
}