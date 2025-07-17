#include <stdio.h>

void ascendingDescendingOrder(int x, int y){

  if(x > y)
    printf("The pair is in descending order!");
  else
    printf("The pair is in ascending order!");
  printf("\n");

}

int main(){

  int x, y;

  printf("1st Number\n");
  scanf("%d", &x);

  
  printf("2nd Number\n");
  scanf("%d", &y);

  ascendingDescendingOrder(x, y);
}
