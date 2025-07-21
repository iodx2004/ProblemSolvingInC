#include <stdio.h>

float SumNumberMath(void){

  float S = 0;
  int i;

  i = 1;
  while(i <= 50){

    S += (float)1 / i;
    i++;
  }

  printf("The Value of S is : %.2f\n", S);
}

int main(){

  SumNumberMath();

}
