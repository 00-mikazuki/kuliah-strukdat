#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
} *last, *current, *newNode, *del;

void createNode (int data)
{
  last = new Node();
  last->data = data;
  last->next = last;
}

void insertStart (int data)
{
  newNode = new Node();
  newNode->data = data;
  newNode->next = last->next;
  last->next = newNode;
}

void insertEnd (int data)
{
  newNode = new Node();
  newNode->data = data;
  newNode->next = last->next;
  last->next = newNode;
  last = newNode;
}

void printSingleLinkedList ()
{
  cout << "Anggota circular single linked list : " << endl;
  current = last->next;
  do {
    cout << current->data << " ";

    current = current->next;
  } while (current != last->next);
  if (current == last->next) {
    cout << current->data;
  }

  cout << "\n" << endl;
}

int main()
{

  createNode(1);
  insertEnd(2);
  insertEnd(3);
  insertEnd(4);
  insertEnd(5);
  insertEnd(6);
  insertEnd(7);
  insertEnd(8);

  printSingleLinkedList();
  return 0;
}
