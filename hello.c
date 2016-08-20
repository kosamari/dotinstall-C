#include <stdio.h>

/*
String

string s; => doesn't exist in C
in C string is Array of char type (always end with \0)

These 3 ways do the same thing
char s[] = {'a', 'b', 'c', '\0'};
char s[] = "abc";
char s[4] = "abc"; if you specify length of an array, don't forget there is '\0' at the end
*/

int main(void) {
  char s[] = "abc";
  printf("%c\n", s[1]); /* b */
  return 0;
}
