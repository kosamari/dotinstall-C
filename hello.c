#include <stdio.h>

/*
Ternary operator
 -　if/else in one line

if (condition) {
  return A;
} else {
  return B;
}

==

value = (condition) ? A : B;
*/

float getMax(float a, float b) {
/*
  if (a >= b) {
    return a;
  } else {
    return b;
  }
*/
  return (a >= b) ? a : b;
}

int main(void) {
  float result;
  result = getMax(2.3, 5.2);
  printf("%f\n", result);
  return 0;
}
