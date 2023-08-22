#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node {
    int id;
    char* data;
    struct Node* next;
};

class linkedList{
    Node *head;
    Node *tail;
    public:
    linkedList();
    void setHead(Node *node){
        this->head=node;
    }
    void setTail(Node *node){
        this->tail=node;
    }
    Node* getHead(){
        return this->head;
    }
    Node* getTail(){
        return this->tail;
    }
    void insertNode(Node *node);
    void RemoveHead(Node *node);


    void printAllNode();

};



#endif // LINKEDLIST_H
