#include <stdio.h>
#define AL 5
#define MAX 5

void arr(void){

     float N[AL];
     int i;
    
    printf("Input the 5 members of the array:\n");
    
    i = 0;
    while(i < AL) {
        scanf("%f", &N[i]);
        i++;
    }
    
    i = 0;
    while(i < AL) {
        if(N[i] < MAX) {
            printf("A[%d] = %.1f\n", i, N[i]);
        }
        i++;
    }

}

int main(){

  arr();

}
