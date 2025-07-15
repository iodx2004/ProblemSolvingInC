#include <stdio.h>


float CountAvrNumberPositive(float Numbers[]){

  int j = 0;
  int pctr = 0;
  float sum = 0;

  while(j < 5){

    if(Numbers[j] > 0){
      
      sum += Numbers[j];
      pctr++;

    }
    j++;
  }

  float averange = sum / pctr;
  printf("\nNumber of positive numbers: %d", pctr);
  printf("\nAverange Value is : %.2f", averange);

  printf("\n");

  return 0;
}

int main(){

  float Number[5];

  printf("1st Number : ");
  scanf("%f" , &Number[0]);
  
  printf("2nd Number : ");
  scanf("%f" , &Number[1]);
  
  printf("3rd Number : ");
  scanf("%f" , &Number[2]);
  
  printf("4th Number : ");
  scanf("%f" , &Number[3]);
  
  printf("5th Number : ");
  scanf("%f" , &Number[4]);

  CountAvrNumberPositive(Number);

}
