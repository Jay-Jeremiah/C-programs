#include <stdio.h>

int main(){
    int currentYear;
    printf("Enter the current year\n");
    scanf("%d",&currentYear);

    int birthYear;
    printf("Enter the year of birth\n");
    scanf("%d",&birthYear);

    int diff = currentYear-birthYear;
    printf("You're %d years old",diff);
    
    return 0;
}