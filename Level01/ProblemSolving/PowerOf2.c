#include <stdio.h>

int PowerOf2(int number){

  int i = 2;
  while(i <= number){
    if((i % 2) == 0){

      printf("The Result %d^2 = %d\n", i , i * i);
    
    }
    i++;
  }
}

int main(){

  int Number;

  printf("Enter The Number Of For Power of 2 : ");
  scanf("%d", &Number);

  PowerOf2(Number);

}
