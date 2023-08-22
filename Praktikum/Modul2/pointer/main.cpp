#include <iostream> 
using namespace std;

void tampilAngka(int *ptrAngka) {
  cout << *(ptrAngka + 1) << endl;
}

int main()
{
  int mat[2][2];
  tampilAngka(*mat);
  return 0;
}
