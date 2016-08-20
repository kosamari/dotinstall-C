#include <stdio.h>

/*
Save memory with pointer!

new type
large integer : long() %ld
takes 8 memory addresses

the following code used 16 memory addresses

Pointer variable only takes 4 memory addresses
*/

void f(long *pa) { /* create pointer from memory address 9-12 */
  *pa += 100; /* 1. access memory address 1-8 - pointed by pointer variable.
                 2. add 100 to the value saved in address 1-8 */
  printf("%ld\n", *pa);
}

int main(void) {
  long a = 1000; /* add 1000 in memory address 1-8 */
  f(&a); /* pass address of a to function f */
  return 0;
}
