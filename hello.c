#include <stdio.h>

/*
Local variable - only active within the block declared

Global variable - available from all block
*/

int b = 1;

void f(void) {
  int a = 0;
  a++;
  printf("a: %d\n", a);
}

void g(void) {
  b++;
  printf("b: %d\n", b);
}

int main(void) {
  f();
  /*printf("[main] a: %d\n", a) => compile error*/
  printf("[main] b: %d\n", b);
  g();
  return 0;
}
