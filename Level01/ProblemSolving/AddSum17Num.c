#include <stdio.h>

void Add17Num(int x, int y){

  if(x > y){

    int temp = x;
    x = y;
    y = temp;

  }

  int i = x;
  int sum = 0;
  
  while(i <= y){

    if((i % 17) != 0){
      sum += i;
    }
    i++;
  }

  printf("The Sum : %d\n", sum);

}

int main(){

  int x, y;

  printf("Enter The 1st Number : ");
  scanf("%d", &x);

  printf("Enter The 2nd Number : ");
  scanf("%d", &y);

  Add17Num(x, y);

}
