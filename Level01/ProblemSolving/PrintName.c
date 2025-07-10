#include <unistd.h>

void ft_putstr(char *str){

  int i = 0;
  while(*str)
    write(1, str++, 1);

}

int main(){

  ft_putstr("Name   : Bakkali Mohamed\n ");
  ft_putstr("DOB    : July 31, 2004   \n");
  ft_putstr("Mobile : 000000000000 \n");

}
