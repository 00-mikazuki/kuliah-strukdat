#include <iostream>
#include <array>

using namespace std;

const int kolom = 3;
const int baris = 2;
void printMatrix( array < array < int, kolom >, baris> nilaiArray )
{
  for( array<int, kolom> vectorbaris:nilaiArray) {
    cout << "[ ";
    for( int nilaiKolom:vectorbaris) {
      cout << nilaiKolom << " ";
    }
    cout << "]" << endl;
  }
}

int main(int argc, char const *argv[])
{
  const int kolom = 3;
  const int baris = 2;
  array < array < int, kolom >, baris> Nmatriks = {1, 2, 3, 4, 5, 6};

  printMatrix(Nmatriks);

  return 0;
}
