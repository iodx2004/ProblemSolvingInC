#include <stdio.h>


void Print50Numbers(void){

  int i = 1;
  while(i <= 50){

    if(i % 2 == 0){

      printf("%d ", i);

    }
    i++;
  }
}

int main(){

  Print50Numbers();

}
