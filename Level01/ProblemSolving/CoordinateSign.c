#include <stdio.h>

void CoordinateSign(int x, int y){

  if(x > 0 && y < 0)
    printf("(+,-)");
  else if (x > 0 && y > 0)
    printf("(+,+)");
  else if (x < 0 && y > 0)
    printf("(-,+)");
  else if (x < 0 && y < 0)
    printf("(-,-)");

}
int main(){

  int x, y;

  printf("Enter The 1st Number : ");
  scanf("%d", &x);

  printf("Enter The 2nd Number : ");
  scanf("%d", &y);

  CoordinateSign(x, y);
}
