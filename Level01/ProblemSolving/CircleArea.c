#include <stdio.h>


float circleArea(const float PI, int R){

  return PI * R * R;

}

int main(){

  const float PI = 3.14;
  int r = 2;

  printf("The Result is : %.2f", circleArea(PI, r));

}
