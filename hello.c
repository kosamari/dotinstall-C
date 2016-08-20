#include <stdio.h>

/*
Things you can do only with Pointer

Function in C returns only one value, if you want to swap value of a and b
how do access 2 values after you call swap function?
*/

void swap(int *pa, int *pb) {
  int tmp; /* create temporary value */
  tmp = *pa; /* copy value of a to temp */
  *pa = *pb; /* overwrite value of a with value of b */
  *pb = tmp; /* overwrite value of b with valeu of temp which was copy of value a */
}

int main(void) {
  int a = 5;
  int b = 10;
  swap(&a, &b);
  printf("a:%d, b:%d\n", a, b);
  return 0;
}
