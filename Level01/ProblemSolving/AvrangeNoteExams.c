#include <stdio.h>

float AverangeNotes(float a, float b, float c, float d){

  float Result = (a + b + c + d) / 4;
  printf("The Result Of Averange Students is : %.1f\n" , Result);

}

int main(){


  int a, b, c, d;

  printf("Enter The Note 1st Student : ");
  scanf("%d", &a);

  printf("Enter The Note 2nd Student : ");
  scanf("%d", &b);

  printf("Enter The Note 3rd Student : ");
  scanf("%d", &c);

  printf("Enter The Note 4th Student : ");
  scanf("%d", &d);


  AverangeNotes(a, b, c, d);

}
