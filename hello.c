#include <stdio.h>

/*
Operators
  - add +
  - subtract -
  - multiple *
  - division /
  - modulo %

Assignment + Operators
  x = x + 5; -> x += 5;

Unary operator
  ++, --
*/
int main(void) {

  int x;
  x = 10 % 3; /* 1 */
  x += 3; /* 4 */
  x++; /* 5 */

  printf("x = %d\n", x);
  return 0;
}
