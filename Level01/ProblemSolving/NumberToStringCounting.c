#include <stdio.h>

void stringToNumberCount(int NB){

  int i, j = 1, x = 0;

  i = 1;
  while(i <= NB){

    while(x < 3){

      printf("%d ", j++);
      x++;

    }
    i++;
    x = 0;
    printf("\n");
 
  }
}

int main(){

  int a;

  printf("Enter The Numbers Of Lines : ");
  scanf("%d", &a);

  stringToNumberCount(a);
}
