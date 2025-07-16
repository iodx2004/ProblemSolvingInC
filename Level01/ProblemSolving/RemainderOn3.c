#include <stdio.h>

int RemaindBy3(int Number){

  int i = 0;
  while(i <= 100){
    if((i % Number) == 3){

      printf("%d\n", i);

    }
    i++;
  }
}

int main(){

  int Number;

  printf("Enter The Number : ");
  scanf("%d", &Number);

  RemaindBy3(Number);

}
