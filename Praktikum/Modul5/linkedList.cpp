#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

void tambahNode(Node** head, int dataBaru)
{
  // Buat node baru
  Node* newNode = new Node;
  newNode->data = dataBaru;
  newNode->next = NULL;
  // Jika linked list masih kosong, node baru menjadi head
  if (*head == NULL) {
    *head = newNode;
    return;
  }
  // Cari elemen terakhir pada linked list
  Node* last = *head;
  while (last->next != NULL) {
    last = last->next;
  }
  // Tambahkan node baru ke elemen terakhir
  last->next = newNode;
}

void tambahNodeAwal(Node** head, int dataBaru)
{
   // Buat node baru
  Node* newNode = new Node;
  newNode->data = dataBaru;

  // Jika linked list masih kosong, node baru menjadi head
  if (*head == NULL) {
    *head = newNode;
    newNode->next = NULL;
    return;
  }

  newNode->next = *head;
  *head = newNode;
}

void hapusAkhir(Node** head)
{
  Node *before, *last = *head;
  while (last->next != NULL) {
    before = last;
    last = last->next;
  }
  before->next = NULL;
  delete last;
}

void cetakList(Node* head)
{
  while (head != NULL) {
    cout << head->data << "->";
    head = head->next;
  }
  cout << endl;
}


int main()
{
  Node* head = NULL;
  // // Tambahkan beberapa elemen ke linked list
  // tambahNode(&head, 1);
  // tambahNode(&head, 2);
  // tambahNode(&head, 3);
  // tambahNode(&head, 4);
  // tambahNode(&head, 5);
  // tambahNode(&head, 6);
  // // Cetak isi linked list
  // cetakList(head);

  tambahNodeAwal(&head, 1);
  tambahNodeAwal(&head, 2);
  tambahNodeAwal(&head, 3);
  tambahNodeAwal(&head, 4);
  tambahNodeAwal(&head, 5);
  tambahNodeAwal(&head, 6);
  tambahNodeAwal(&head, 7);
  cout << "Sebelum dilakukan hapusAkhir():" << endl;
  cetakList(head);

  cout << "\nSetelah dilakukan hapusAkhir():" << endl;
  hapusAkhir(&head);
  cetakList(head);

  tambahNodeAwal(&head, 8);
  cetakList(head);

  hapusAkhir(&head);
  cetakList(head);

  return 0;
}
