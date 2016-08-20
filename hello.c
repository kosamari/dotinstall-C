#include <stdio.h>

/*
If conditional
  - greater than or equal to >=
  - less than or equal to <=
  - grater than >
  - less than <
  - equal ==
  - not equal !=
*/
int main(void) {
  int score = 80;

  if (score >= 60) {
    printf("ok!\n");
  } else if (score >= 50) {
    printf("so so ...\n");
  } else {
    printf("ng!\n");
  }

  return 0;
}
