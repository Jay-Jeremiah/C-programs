#include <stdio.h>

int main(){
    int A;
    printf("Enter number A: \n");
    scanf("%d",&A);

    int B;
    printf("Enter number B:  \n");
    scanf("%d",&B);

    int sum = A+B;
    printf("The sum of the 2 numbers is %d",sum);
    
    return 0;
}