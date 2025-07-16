#include <stdio.h>

int CheckPNNumber(int Number){

  if(Number > 0){

    printf("Positive ");

  }
  else{
    printf("Negative ");
  }
} 

int CheckOENumber(int Number){

  if(Number % 2 == 0){

    printf("Even\n");

  }
  
  else{
    printf("Odd\n");
  }

}

int main(){

  int Number;

  printf("Enter The Number : ");
  scanf("%d", &Number);

  CheckPNNumber(Number);
  CheckOENumber(Number);
}
