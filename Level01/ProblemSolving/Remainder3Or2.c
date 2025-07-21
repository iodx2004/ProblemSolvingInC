#include <stdio.h>

void Reamiander3or2(int x, int y){

  int temp, i, sum = 0;

  if(x > y){

    temp = x;
    x = y;
    y = temp;

  }

  i = x + 1;
  while(x < y){

    if((i % 7) == 2 || (i % 7) == 3){

      printf("%d\n", i);

    }

    i++;
  
    if(i > 20){

      break;

    }
  }
}

int main(){

  int x, y;

  printf("Enter The 1st Number :");
  scanf(" %d", &x);

  printf("Enter The 2nd Number :");
  scanf(" %d", &y);

  Reamiander3or2(x, y);

}
