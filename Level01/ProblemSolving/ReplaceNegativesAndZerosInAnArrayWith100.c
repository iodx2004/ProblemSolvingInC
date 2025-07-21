#include <stdio.h>

void arrayNum(void){

  int n[5], i, x;

  printf("Input The 5 Numbers Of An Array : \n");

  i = 0;
  while(i < 5){

    scanf("%d", &x);
    if(x > 0){

      n[i] = x;

    }
    else
      n[i] = 100;

    i++;

  }

  printf("Array Values Are : \n");
  i = 0;
  while(i < 5){

    printf("n[%d] = %d\n", i, n[i]);
    i++;
  }
}

int main(){

  arrayNum();

}
