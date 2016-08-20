#include <stdio.h>

/*
Pointer : variable to store address in memory

int takes memory of 4 addresses

use * to create pointer
& : address operator
* : indirection operator (get value from the address which pointer variable is pointing to)
*/

int main(void) {
  int a; /* naming 4 addresses as a */
  a = 10;/* keep value 10 in the address named a */

  int *pa; /* use * to create pointer */
  pa = &a; /* point to address of variable a*/
  printf("%d\n", *pa); /* get variable from the memory address where pointer variable is pointing to*/
  return 0;
}
