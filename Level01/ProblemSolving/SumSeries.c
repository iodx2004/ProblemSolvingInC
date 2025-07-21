#include <stdio.h>

float SumSerie(void){

  float s = 0, j = 1, d, i;

  i = 1;
  while(i <= 7){

    d = (i / j);
    s += d;
    j = j * 2;
    i += 2;

  }

  printf("The Value Of Series is : %.2f\n", s);

}

int main(){

  SumSerie();

}
