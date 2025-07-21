#include <stdio.h>

float FindIvisor(int a){

  int i;

  printf("All The Divisors %d Are : \n", a);

  i = 1;
  while(i <= a){

    if((a % i) == 0){

      printf("\n%d", i);
      printf("\n");

    }
    i++;
  } 

}

int main(){

  int a;

  printf("Enter The Number : ");
  scanf("%d", &a);

  FindIvisor(a);

}
