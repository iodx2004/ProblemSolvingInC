#include <stdio.h>

void SumOddNumbers(int x, int y){

  int i, total = 0;
  if(x < y){

    int temp = x;
    x = y;
    y = temp;

  }

  printf("The List Of OddNumbers : ");

  i = y;
  while(i <= x){

    if((i % 2) != 0){

      printf("%d\n", i);
      total += i;

    }
    i++;
  }
  printf("Sum = %d\n", total);
}

int main(){

  int x, y;
  
  printf("1st Number : \n");
  scanf("%d", &x);
  
  printf("2nd Number : \n");
  scanf("%d", &y);

  SumOddNumbers(x, y);

}
