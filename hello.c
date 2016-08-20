#include <stdio.h>

/*
variable - label for data
Data Types (famous ones)
  - int(integers) %d
  - float(decimals) %f
  - char(one character) %c
*/
int main(void) {

  int x; /* make variable */
  x = 10; /* assign data to variable */
  float y = 5.2;
  char c = 'A';

  printf("x = %d, y = %f. c = %c\n", x, y, c);
  return 0;
}
