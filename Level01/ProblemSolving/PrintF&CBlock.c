#include <unistd.h>

/* Print "F" Block */

int main(){

  write(1, "######\n", 6);
  write(1, "#\n", 2);
  write(1, "#\n", 2);
  write(1, "#####\n", 5);
  write(1, "#\n", 2);
  write(1, "#\n", 2);
  write(1, "#\n", 2);

}

/*  And C SameThing !  */
