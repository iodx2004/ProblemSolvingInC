#include <stdio.h>

void ValidateAPassword(int PIN){

  if(PIN == 1234)
    printf("Correct Passowrd !\n");
  else
    printf("Incorrect Passowrd ! Try again Later :) \n");

}

int main(){

  int PIN;
  printf("Enter The Passowrd : ");
  scanf("%d", &PIN);

  ValidateAPassword(PIN);
}
