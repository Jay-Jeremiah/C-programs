#include <stdio.h>

int add(int x){
    return 5 + x;
}

int sum(int p, int q){
    return p+q;
}

int main(){
    printf("Result is %d\n",add(3));

    int total = sum(67,900);
    printf("The total is %d\n",total);
    return 0;
}