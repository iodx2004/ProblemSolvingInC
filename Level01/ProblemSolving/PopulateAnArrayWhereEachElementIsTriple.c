#include <stdio.h>

void arr(void){

      int n[5], i, x;
    
    // Input the first number of the array
    printf("Input the first number of the array:\n");
    scanf("%d", &x);
    
    i = 0;
    while(i < 5) {
        n[i] = x;
        x = 3 * x;
        i++;
    }

    i = 0;
    while(i < 5){
        printf("n[%d] = %d\n", i, n[i]);
        i++;
    }

}

int main(){

  arr();

}
