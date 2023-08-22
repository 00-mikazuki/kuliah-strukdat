#include <stdio.h>

int main()
{
  int ArrayInt[10]={0,1,2,3,4,5,6,7,8,9};
  printf(" Array Int indek ke-2=%d\n", ArrayInt[2]);

  char ArrChar[10]={'0','1','2','3','4','5','6','7','8','9'};
  printf(" Array Char indek ke-9=%d-%c\n", ArrChar[9],(char)ArrChar[9]);
  
  return 0;
}