#include <stdio.h>
#include <math.h>

double quadric(double a, double b, double c){

  double pr;
  
  pr = (b * b) - (4 * (a) * (c));
  if(pr > 0 && a != 0){

    double x, y;
    pr = sqrt(pr);
    x = (-b + pr) / (2 * a);
    y = (-b - pr) / (2 * a);

    printf("Root1 = %.5f\n", x);
    printf("Root2 = %.5f\n", y);

  }

  else{

    printf("\nImpossible to find The Root. \n");

  }
  return pr;
}

int main(){

    double a, b, c;

    printf("\nInput the first number(a): "); 
    scanf("%lf", &a);
    printf("\nInput the second number(b): "); 
    scanf("%lf", &b);
    printf("\nInput the third number(c): "); 
    scanf("%lf", &c); 

    quadric(a, b, c);
}
