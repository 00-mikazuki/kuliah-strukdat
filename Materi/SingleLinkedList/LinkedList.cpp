#include <LinkedList.h>

// Utility function to create new node
Node* createNode(int id, char* data)
{
    Node* temp = new Node;
    temp->id = id;
    temp->data= data;
    temp->next = NULL;
    return temp;
}


linkedList::linkedList(){
    this->setHead(NULL);
    this->setTail(NULL);
}

void linkedList::insertNode(Node* node){
    printf("\n%s","Insert Node");
    if(head==NULL){
        head=node;
        tail=node;
    }
    else{
        tail->next=node;
        tail=node;
    }
}

void linkedList::RemoveHead(Node* node){
    printf("\n%s","Remove Head Node");
    if(head!=NULL){
        Node *temp;
        temp=head;
        head=head->next;
        delete(temp);
    }

}

void linkedList::printAllNode()
{
    cout <<"\n"<<endl;
    while (head) {
        // print current node
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
