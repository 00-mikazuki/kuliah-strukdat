#include <stdio.h>

#define PANJANG 10 
#define LEBAR 5
#define ENTER '\n'
int main() {
  int area; 
  
  area = PANJANG * LEBAR;
  printf("value of area : %d", area);
  printf("%c", ENTER);
  return 0;
}