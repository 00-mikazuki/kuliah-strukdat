#include <stdio.h>
#include <climits>

int main() {
  bool b=true;
  printf(" Size Of bool_BIT : %d\n", sizeof((bool)b));
  printf("CHAR_BIT : %d\n", CHAR_BIT);
  printf(" Size Of CHAR_BIT : %d\n", sizeof((bool)CHAR_BIT));
  printf("CHAR_MIN-MAX : %d-%d\n", CHAR_MIN,CHAR_MAX);
  printf(" Size Of CHAR_MAX : %d\n", sizeof((char)CHAR_MAX));
  printf("INT_MIN-MAX : %d-%d\n", (int)INT_MIN,(int)INT_MAX);
  printf(" Size Of INT_MAX : %d\n", sizeof(INT_MAX));
  double d;
  printf(" Size Of DOUBLE : %d\n", sizeof(d));

  return 0;
}
