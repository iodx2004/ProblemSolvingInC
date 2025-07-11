#include <stdio.h>

float CircleAreaPerimeter(float PI, int Raduis){

  float Result = 2 * PI * Raduis;

  return Result;
}


int main(){

  float PI = 3.14;
  int r = 2;

  printf("The Result is : %.2f ", CircleAreaPerimeter(PI, r));

}
