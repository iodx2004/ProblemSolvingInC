#include <stdio.h>


int TimeConvert(int TotalSec){

  int h, m, s;

  h = (TotalSec/3600);
  m = (TotalSec - (3600*h)) / 60;
  s = (TotalSec - (3600*h) - (m * 60));

  printf("HH:MM:SS - %d:%d:%d\n", h, m, s);
}

int main(){
  
  int TotalSecond;

  printf("Enter How Much many Second Do U Want : ");

  scanf("%d", &TotalSecond);

  TimeConvert(TotalSecond);

}
