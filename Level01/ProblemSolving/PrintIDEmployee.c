#include <stdio.h>
#include <unistd.h>

void printIDEmployee(char *str){

  int i = 0;
  while(*str)
    write(1, str++, 1);

}

int main(){

  printIDEmployee(" Input the Employees ID(Max. 10 chars): 0342 \n Input the working hrs: 8\n Salary amount/hr: 15000 \n Employees ID = 0342\n Salary = U$ 120000.00\n" );


}
