#include <stdio.h>

void LinesNumber(int x, int y){

  int i, j, l;

  i = 1;
  l = 1;
  while(i <= x){

    j = 1;
    while(j <= y){

      printf("%d ", l);
      l++;
      j++;

    }
    i++;
    printf("\n");
  }
  return;
}

int main(){

  int a, b;

  printf("Enter The 1st Number Of Lines : ");
  scanf("%d", &a);

  printf("Enter The 2nd Number Of Lines : ");
  scanf("%d", &b);

  LinesNumber(a, b);
}
