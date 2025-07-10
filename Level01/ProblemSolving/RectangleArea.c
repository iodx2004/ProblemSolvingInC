#include <unistd.h>
#include <stdio.h>

int rectangleArea(int l, int w){

  return l * w;

}

int main(){

  int width = 2;
  int length = 2;

  rectangleArea(length, width);
  printf("The Result is : %d", rectangleArea(length, width));
}
