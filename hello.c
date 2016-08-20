#include <stdio.h>

/*
Static variable - keep the value assigned to variable while program runs
*/

void f(void) {
  int a = 0;
  a++;
  printf("a: %d\n", a);
}

void g(void) {
  static int b = 0; /* static variable */
  b++;
  printf("b: %d\n", b);
}

int main(void) {
  f(); /* a: 1 */
  f(); /* a: 1 */
  f(); /* a: 1 */

  g(); /* b: 1 */
  g(); /* b: 2 */
  g(); /* b: 3 */
  return 0;
}
