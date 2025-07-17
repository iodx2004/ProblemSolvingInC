#include <stdio.h>

float PossibleDevideNumber(float x, float y){

  float result = x / y;
  if(y != 0){
    printf("Result is : %f", result);
  }
  else if(y == 0){

    printf("Isn't Possible Divide On 0\n");

  }
}

int main(){

  float x, y;

  printf("Enter The First Number : ");
  scanf("%f", &x);

  printf("Enter The Second Number : ");
  scanf("%f", &y);

  PossibleDevideNumber(x, y);

}
