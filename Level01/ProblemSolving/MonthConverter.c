#include <stdio.h>


int MounthConverter(int ndays){

  int y, m, d;

  y = (int)ndays / 365;
  ndays = ndays - (365 * y);
  m = (int)ndays / 30;
  d = (int)ndays - (m * 30);

  printf("%d Years, %d Mounths, %d days\n", y, m, d);

}

int main(){

  int ndays;

  printf("Enter How Much The days Do U Want : ");

  scanf("%d", &ndays);

  MounthConverter(ndays);

}
