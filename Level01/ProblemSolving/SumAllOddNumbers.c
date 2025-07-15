#include <stdio.h>

void sumAllOddNumbers(int Numbers[]){

  int sum = 0;
  int i = 0;

  while(i < 5){
    if(Numbers[i] % 2 != 0){

      sum += Numbers[i];

    }
    i++;
  }
  printf("The Result is : %d" , sum);
}

int main(){

  int Number[5];
  int i = 0;

  while(i < 5){

    printf("%d Number : ", i + 1);
    scanf("%d", &Number[i]);
    i++;
  }

  sumAllOddNumbers(Number);

}
