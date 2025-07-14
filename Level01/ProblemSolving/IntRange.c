#include <stdio.h>

int rangeInt(int number){

  if(number >= 0 && number <= 20){

    printf("An Interval is : [0, 20]\n");

  }

  else if(number >= 21 && number <= 40){

    printf("An Interval is : [21, 40]\n");

  }

  else if(number >= 41 && number <= 60){

    printf("An Interval is : [41, 60]\n");

  }

  else if(number >= 61 && number <= 80){

    printf("An Interval is : [61, 80]\n");

  }

  else {

    printf("Error In An Interval !\n");

  }

}

int main(){

  int Number;
  printf("Enter A Number : ");
  scanf("%d", &Number);
  rangeInt(Number);

}
