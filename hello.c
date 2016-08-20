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

If function don't take arguments nor return value, use `void`
In C - main function is the one it is always called.
*/

/* Prototype Declaration - when you write function after main function */
float getMax(float a, float b);

void sayHi(void) {
  printf("hi!\n");
}

int main(void) {
  float result;
  result = getMax(2.3, 5.2);
  printf("%f\n", result);

  sayHi();

  return 0;
}

float getMax(float a, float b) {
  if (a >= b) {
    return a;
  } else {
    return b;
  }
}
