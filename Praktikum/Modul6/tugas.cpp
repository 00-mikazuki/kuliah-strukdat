#include <iostream>
using namespace std;

class Node
{
public:
  int value;

  Node *left;
  Node *right;
  Node(int value)
  {
    this->value = value;
    this->left = nullptr;
    this->right = nullptr;
  }
};

void inOrderTraversal(Node *root)
{
  if (root == nullptr)
    return;

  inOrderTraversal(root->left);
  cout << root->value << " ";
  inOrderTraversal(root->right);
}

// preOrder Traversal
void preOrderTraversal(Node *root)
{
  if (root == nullptr)
    return;

  cout << root->value << " ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

// postOrder Traversal
void postOrderTraversal(Node *root)
{
  if (root == nullptr)
    return;

  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout << root->value << " ";
}

Node *createBinaryTree()
{
  Node *root = new Node(1);
  return root;
}

void addChildren(Node *root)
{
  Node *leftChild = new Node(2);

  Node *rightChild = new Node(3);
  Node *nodebaru1 = new Node(4);
  Node *nodebaru2 = new Node(5);

  root->left = leftChild;
  root->right = rightChild;
  rightChild->right = nodebaru1;
  rightChild->left = nodebaru2;
}

int main()
{
  // Langkah 1: Membuat pohon biner
  Node *root = createBinaryTree();

  // Langkah 2: Menambahkan anak-anak
  addChildren(root);

  // Langkah 3: Melakukan traversal inorder
  cout << "inOrderTraversal:" << endl;
  inOrderTraversal(root);
  cout << "\n" << endl;
  
  cout << "preOrderTraversal:" << endl;
  preOrderTraversal(root);
  cout << "\n" << endl;

  cout << "postOrderTraversal:" << endl;
  postOrderTraversal(root);
  cout << "\n" << endl;

  delete root->left;
  delete root->right;

  delete root;

  return 0;
}
