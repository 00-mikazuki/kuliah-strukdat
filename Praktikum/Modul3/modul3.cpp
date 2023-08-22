#include <iostream>
using namespace std;

struct Mahasiswa {

  string nama;
  int nim;

};

class Bentuk {
  public:
    int panjang;
    int lebar;
    void setPanjang(int p) {
      panjang = p;
    }
    void setLebar(int l) {
      lebar = l;
    }
};

// class turunan
class PersegiPanjang : public Bentuk {
  public:
    int hitungLuas() {
      return panjang * lebar;
    }
};

class Segitiga : public Bentuk {
  public:
    int hitungLuas() {
      return 0.5 * panjang * lebar;
    }
};

int main()
{
  Mahasiswa mhs;

  mhs.nama = "Juan";
  mhs.nim = 2204;

  cout << "Nama mahasiswa : " << mhs.nama << endl;
  cout << "NIM mahasiswa : " << mhs.nim << endl;


  Bentuk b;

  b.panjang = 10;
  b.lebar = 5;

  cout << "panjang : " << b.panjang << endl;
  cout << "lebar : " << b.lebar << endl;

  PersegiPanjang pp;
  pp.setPanjang(10);
  pp.setLebar(5);

  cout << "luas persegi panjang : " << pp.hitungLuas() << endl;

  Segitiga sgt;
  sgt.setPanjang(10);
  sgt.setLebar(10);

  cout << "luas segitiga : " << sgt.hitungLuas() << endl;

  return 0;
}
