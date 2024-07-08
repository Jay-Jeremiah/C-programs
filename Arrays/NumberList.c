// arrays - used to store multiple values in a single variable.
/*Like any number variable, we should specify the data type and variable name,
followed by square brackets*/

#include <stdio.h>

int main(){
    int numbers[] = {25,50, 75, 100};
    printf("%d\n",numbers[0]);

    //change array element
    printf("%d\n",numbers[1]);      //prints the second number of the list

    numbers[1] = 67;
    printf("%d\n",numbers[1]);
    return 0;
}