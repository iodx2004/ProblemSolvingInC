#include <stdio.h>

void strinput(int *x, int *y){

  printf("1st Number : ");
  scanf("%d", x);

  printf("2nd Number : ");
  scanf("%d", y);

}

void ft_swap(int *x, int *y){

  if(*x > *y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

  }

}

void checkFactor(int x, int y){

  if(y % x == 0){

    printf("Multiplied !\n");

  }

  else{

    printf("Non Multiplied !\n");

  }

}

int main(){

  int x, y;

  strinput(&x, &y);
  ft_swap(&x, &y);
  checkFactor(x, y);

}
