#include <stdio.h>
#include <math.h>

double calculate2Points(int x1, int y1, int x2, int y2){

  double result = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
  return sqrt(result);

}

int main(){

  int a = 25;
  int b = 15;
  int c = 35;
  int d = 10;

  printf("The Distance Point is : %.4f", calculate2Points(a, b, c, d));

}
