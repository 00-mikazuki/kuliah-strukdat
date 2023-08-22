#include <LinkedList.h>
#include <LinkedList.cpp>
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello Linked List!" << endl;
    Node *node = createNode(NULL,NULL);
    linkedList list;

    node = createNode(1,"satu");
    list.insertNode(node);
    node = createNode(2,"dua");
    list.insertNode(node);
    node = createNode(3,"tiga");
    list.insertNode(node);
    node = createNode(4,"empat");
    list.insertNode(node);

    printf("\nhead:%s",list.getHead()->data);
    list.RemoveHead(node);

    list.printAllNode();
    return 0;
}
