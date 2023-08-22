#include <iostream>

using namespace std;

struct DataMahasiswa
{
  string nama, nim, jurusan;

  DataMahasiswa *next;
};

DataMahasiswa *head, *tail, *cur, *newNode, *del, *before, *next;

// create new node
void createNode (string nama, string nim, string jurusan){
  head = new DataMahasiswa();
  head->nama = nama;
  head->nim = nim;
  head->jurusan = jurusan;
  head->next = NULL;
  tail = head;
}

void insertNode (string nama, string nim, string jurusan)
{
  newNode = new DataMahasiswa();
  newNode->nama = nama;
  newNode->nim = nim;
  newNode->jurusan = jurusan;
  newNode->next = head;
  head = newNode;
}

void printAllNode ()
{
  cout << "\n" << endl;
  cur = head;
  while (cur != NULL)
  {
    cout << "Nama : " << cur->nama << endl;
    cout << "NIM : " << cur->nim << endl;
    cout << "Jurusan : " << cur->jurusan << endl;
    cout << "\n" << endl;

    cur = cur->next;
  }
}

int main()
{
  
  createNode("Juan", "220411100066", "TIF");
  insertNode ("Dio", "220411100077", "TIF");

  printAllNode ();

  



  return 0;
}
