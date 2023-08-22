#include <iostream>
using namespace std;

// fungsi membuat matriks
void makeMatrix(int *ptrMatrix, int baris, int kolom)
{
  int index = 0;
  for( int i = 0; i < baris; i++ ) {
    for( int j = 0; j < kolom; j++ ) {
      cin >> *(ptrMatrix + index);
      index++;
    }
  }
}

// fungsi menjumlahkan matriks
void tambahMatriks(int *ptrMatrixJumlah, int *ptrMatrix1, int *ptrMatrix2, int baris, int kolom) {
  int index = 0;
  for( int i = 0; i < baris; i++ ) {
    for( int j = 0; j < kolom; j++ ) {
      *(ptrMatrixJumlah + index) = *(ptrMatrix1 + index) +  *(ptrMatrix2 + index);
      index++;
    }
  }
}

// fungsi menampilkan matriks
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
  int baris, kolom;
  cout << "Masukkan jumlah baris: "; 
  cin >> baris;
  cout << "Masukkan jumlah kolom: "; 
  cin >> kolom;

  int matriks1[baris][kolom], matriks2[baris][kolom], jumlah[baris][kolom];

  cout << "Masukkan elemen matriks 1: " << endl;
  makeMatrix(*matriks1, baris, kolom);

  cout << "Masukkan elemen matriks 2: " << endl;
  makeMatrix(*matriks2, baris, kolom);

  tambahMatriks(*jumlah, *matriks1, *matriks2, baris, kolom);
  cout << "Hasil penjumlahan matriks:" << endl;
  printMatrix(*jumlah, baris, kolom);

  return 0; 
}
