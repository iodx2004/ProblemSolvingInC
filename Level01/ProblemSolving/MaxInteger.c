#include <stdio.h>

int maxInteger(int firstInt, int secondInt, int thirdInt){


  if(firstInt && secondInt <= thirdInt){

    return thirdInt;

  }

  else if(firstInt && thirdInt <= secondInt){

    return secondInt;

  }

  else if(thirdInt && secondInt <= firstInt){

    return firstInt;

  }

}

int main(){

  int a = 10;
  int b = 20;
  int c = 30;

  printf("The Max is : %d" , maxInteger(a, b, c));

}
