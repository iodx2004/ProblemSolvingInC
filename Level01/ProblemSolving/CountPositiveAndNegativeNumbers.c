#include <stdio.h>

int CountNegativePostiveNumbers(int Numbers[]){

  int j = 0;
  int pctr = 0;
  int nctr = 0;
  while(j < 5){

    if(Numbers[j] > 0){

      pctr++;

    }

    else if(Numbers[j] < 0){

      nctr++;

    }
    j++;
  }

  printf("\nNumber of positive numbers: %d", pctr);
  printf("\nNumber of negative numbers: %d", nctr);
  printf("\n");

  return 0;
}

int main(){

  int Number[5];

  printf("1st Number : ");
  scanf("%d", &Number[0]);

  printf("2nd Number : ");
  scanf("%d", &Number[1]);

  printf("3rd Number : ");
  scanf("%d", &Number[2]);

  printf("4th Number : ");
  scanf("%d", &Number[3]);

  printf("5th Number : ");
  scanf("%d", &Number[4]);

  CountNegativePostiveNumbers(Number);

}
