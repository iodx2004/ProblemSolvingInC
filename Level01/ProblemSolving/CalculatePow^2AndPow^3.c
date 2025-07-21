#include <stdio.h>

void Pow3and2(int Number){

  int i, j = 1, x = 0;

  i = 1;
  while(i <= Number){

    printf("%d %d %d\n", i, i * i, i * i * i);
    i++;
  
  }
  return;
} 

int main(){

  int a;

  printf("Enter The Number For Powing 2 and 3 : ");
  scanf("%d", &a);

  Pow3and2(a);
}
