#include <stdio.h>

int sumOddNumbers(int Total){

  int numbers[5] = {11, 17, 13, 12, 5};
  int i = 0;
  while (i < 5){
    if(numbers[i] % 2 != 0){
      Total += numbers[i];
    }
    i++;
  }
  return Total;
}

int main(){ 

  int total = 0;
  printf("The Total is : %d", sumOddNumbers(total));

}
