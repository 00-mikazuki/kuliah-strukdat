#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

  string teks ="HELLO STRING";
  char cteks[100]="teks";

  teks.copy(cteks,2,0);
  cout << cteks << endl;
  printf(" Array Char indek ke-0=%c = %c\n", cteks[0],teks.at(0));

  char* c = "POINTER CHAR";
  printf(" Array Char pointer ke-5=%c\n", *(c+4));

  c=&teks.at(0);
  printf(" Array Char pointer %c\n", *(c+4));


  return 0;
}