#include <stdio.h>

/*
Arrays
*/

int main(void) {
  int sales[3]; /* specify size */
  sales[0] = 200;
  sales[1] = 400;
  sales[2] = 300;

  /* same thing as above, you can omit size of array in [] */
  int sales2[] = {200, 400, 300};

  printf("%d\n", sales[1]);
  printf("%d\n", sales2[1]);
  return 0;
}
