#include <stdio.h>

double weightAverange(double result){

  double wi = 15;
  double wi2 = 25;
  double item1 = 5;
  double item2 = 4;

  result = ((wi * item1) + (wi2 * item2)) / (item1 + item2);

  return result;

}

int main(){

  double res;

  printf("The Result is : %.2f \n", weightAverange(res));

}
