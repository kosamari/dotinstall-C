#include <stdio.h>

/*
Save memory with pointer!

new type
large integer : long() %ld
takes 8 memory addresses

the following code used 16 memory addresses
*/

void f(long a) {
  a += 100; /* copy 1000 in memory address 9-16, then add 100 */
  printf("%ld\n", a);
}

int main(void) {
  long a = 1000; /* add 1000 in memory address 1-8 */
  f(a);
  return 0;
}
