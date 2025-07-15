#include <stdio.h>

float TraingleArea(float x, float y, float z){

  float Total = x + y + z;

  if(x < (y + z) && y < (x + z) && z < (y + x)){

    printf("The Total is : %.1f" , Total);

  }

  else{

    printf("\n Error Cuz Isn't Possible for Create Traingle !\n");
  }

  return Total;

}

int main(){

  int a , b , c;

  printf("1st Number : \n");
  scanf("%d", &a);

  printf("2nd Number : \n");
  scanf("%d", &b);

  printf("3rd Number : \n");
  scanf("%d", &c);

  TraingleArea(a, b, c);

}
