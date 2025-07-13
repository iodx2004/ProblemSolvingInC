#include <stdio.h>


int ValidateCondtion(int p, int q, int r, int s){

  if((q > r) && (s > p) && ((r + s) > (p + q)) && (r > 0) && (s > 0) && (p % 2 == 0)){

    printf("Correct Values\n");

  }

  else{

    printf("Wrong Values\n");

  }

}

int main(){

  int a, b, c, d;

  printf("Enter The Fourth Values :\n");

  scanf("%d\n", &a);
  scanf("%d\n", &b);
  scanf("%d\n", &c);
  scanf("%d\n", &d);

  ValidateCondtion(a, b, c ,d);

}
