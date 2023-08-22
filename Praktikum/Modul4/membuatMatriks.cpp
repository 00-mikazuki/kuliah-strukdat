#include <iostream>
using namespace std;

void printMatrix(int *ptrMatrix, int baris, int kolom)
{
  int index = 0;
  for( int i = 0; i < baris; i++ ) {
    cout << "[ ";
    for( int j = 0; j < kolom; j++ ) {
      cout << *(ptrMatrix + index) << " ";
      index++;
    }
    cout << "]" << endl;
  }
}

int main()
{
  int baris = 2;
  int kolom = 2;
  int matrix1[baris][kolom] = {{1,2},{3,4}};
  printMatrix(*matrix1, 2, 2);
  return 0;
}
