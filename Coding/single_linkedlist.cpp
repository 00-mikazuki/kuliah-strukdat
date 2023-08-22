#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
} *head, *tail, *current, *newNode, *del;

void createNode (int data)
{
  head = new Node();
  head->data = data;
  head->next = NULL;
  tail = head;
}

void insertHead (int data)
{
  newNode = new Node();
  newNode->data = data;
  newNode->next = head;
  head = newNode;
}

// tambahAkhir single linked list
void insertTail (int data)
{
  newNode = new Node();
  newNode->data = data;
  newNode->next = NULL;
  tail->next = newNode;
  tail = newNode;
}

void deleteHead ()
{
  del = head;
  head = head->next;
  delete del;
}

void deleteTail ()
{
  del = tail;
  current = head;
  while (current->next != tail)
  {
    current = current->next;
  }
  tail = current;
  tail->next = NULL;
  delete del;
}

// print single linked list
void printSingleLinkedList ()
{
  cout << "Anggota single linked list : " << endl;
  current = head;
  while (current != NULL)
  {
    cout << current->data << " ";

    current = current->next;
  }
  cout << "\n" << endl;
}

int main()
{
  
  createNode(1);
  insertTail(2);
  insertTail(3);
  insertTail(4);
  insertTail(5);
  insertTail(6);
  insertTail(7);
  insertTail(8);
  printSingleLinkedList();

  deleteTail();
  printSingleLinkedList();

  deleteTail();
  printSingleLinkedList();

  deleteTail();
  printSingleLinkedList();

  return 0;
}
