#include <stdio.h>

/*
Function
 - combine multiple task in one name

how to write function:
[return type] [function name] ([argument type][argument name], ...) {
    do operation;
    return [return value];
}

how call function:
[function name]([argument], ...)
*/

float getMax(float a, float b) {
  if (a >= b) {
    return a;
  } else {
    return b;
  }
}

int main(void) {
  float result;
  result = getMax(2.3, 5.2);
  printf("%f\n", result);
  return 0;
}
