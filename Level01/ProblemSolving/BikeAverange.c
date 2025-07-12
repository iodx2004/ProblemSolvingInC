#include <stdio.h>


int BikeAverange(int km, int fuel){

  int result = km / fuel;
  return result;

}

int main(){

  int a = 350;
  int b = 5;
  
  printf("The Bike Avereange is : %d", BikeAverange(a, b));

}
