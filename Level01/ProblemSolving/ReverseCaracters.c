#include <unistd.h>


int main(){

  char c1 = 'X';
  char c2 = 'M';
  char c3 = 'L';

  write(1, &c3, 1);
  write(1, &c2, 1);
  write(1, &c1, 1);

}
