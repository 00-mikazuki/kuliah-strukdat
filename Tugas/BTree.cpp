#include <iostream>
#include <cstdlib>
using namespace std;

struct BTree {
   int *data;
   BTree **child_ptr;
   bool isLeaf;
   int n;
};

BTree *r = NULL, *newNode = NULL, *x = NULL;

BTree* init() {
   newNode = new BTree;
   newNode->data = new int[6];
   newNode->child_ptr = new BTree *[7];
   newNode->isLeaf = true;
   newNode->n = 0;
   for (int i = 0; i < 7; i++) {
      newNode->child_ptr[i] = NULL;
   }
   return newNode;
}

void sort(int *node, int n) {
	int temp;
  for (int i = 0; i < n; i++) {
    for (int j = i; j <= n; j++) {
      if (node[i] > node[j]) {
        temp = node[i];
        node[i] = node[j];
        node[j] = temp;
      }
    }
  }
}

int split_child(BTree *x, int i) {
   int j, mid;
   BTree *np1, *np3, *y;
   np3 = init(); //create new node
   np3->isLeaf = true;
   if (i == -1) {
      mid = x->data[2]; //find mid
      x->data[2] = 0;
      x->n--;
      np1 = init();
      np1->isLeaf = false;
      x->isLeaf = true;
      for (j = 3; j < 6; j++) {
         np3->data[j - 3] = x->data[j];
         np3->child_ptr[j - 3] = x->child_ptr[j];
         np3->n++;
         x->data[j] = 0;
         x->n--;
      }
      for (j = 0; j < 6; j++) {
         x->child_ptr[j] = NULL;
      }
      np1->data[0] = mid;
      np1->child_ptr[np1->n] = x;
      np1->child_ptr[np1->n + 1] = np3;
      np1->n++;
      r = np1;
   } else {
      y = x->child_ptr[i];
      mid = y->data[2];
      y->data[2] = 0;
      y->n--;
      for (j = 3; j <6 ; j++) {
         np3->data[j - 3] = y->data[j];
         np3->n++;
         y->data[j] = 0;
         y->n--;
      }
      x->child_ptr[i + 1] = y;
      x->child_ptr[i + 1] = np3;
   }
   return mid;
}

void insert(int a) {
   int i, t;
   x = r;
   if (x == NULL) {
      r = init();
      x = r;
   } else {
      if (x->isLeaf == true && x->n == 6) {
         t = split_child(x, -1);
         x = r;
         for (i = 0; i < (x->n); i++) {
            if ((a >x->data[i]) && (a < x->data[i + 1])) {
               i++;
               break;
            } else if (a < x->data[0]) {
               break;
            } else {
               continue;
            }
         }
         x = x->child_ptr[i];
      } else {
         while (x->isLeaf == false) {
            for (i = 0; i < (x->n); i++) {
               if ((a >x->data[i]) && (a < x->data[i + 1])) {
                  i++;
                  break;
               } else if (a < x->data[0]) {
                  break;
               } else {
                  continue;
               }
            }
            if ((x->child_ptr[i])->n == 6) {
               t = split_child(x, i);
               x->data[x->n] = t;
               x->n++;
               continue;
            } else {
               x = x->child_ptr[i];
            }
         }
      }
   }
   x->data[x->n] = a;
   sort(x->data, x->n);
   x->n++;
}

BTree* search_key(struct BTree* node, int key) {
    // Jika node null, maka tidak ditemukan kunci yang dicari
    if (node == NULL)
        return NULL;

    int i;
    cout<<node->data[1];
    return 0;
    // Mencari posisi kunci pada node
    for (i = 0; i < node->n; i++) {
        if (key < node->data[i])
            break;
        if (key == node->data[i])
        		cout<<node->data[i];
            return node;
    }

    // Jika kunci lebih kecil daripada key[i], maka kita akan mencari pada subtree kiri dari key[i]
    if (node->isLeaf == false)
        return search_key(node->child_ptr[i], key);

    // Jika kunci lebih besar daripada key[i], maka kita akan mencari pada subtree kanan dari key[i]
    return search_key(node->child_ptr[i + 1], key);
}

void traverse(BTree *node) {
   cout<<endl;
   int i;
   for (i = 0; i < node->n; i++) {
      if (node->isLeaf == false) {
         traverse(node->child_ptr[i]);
      }
      cout << " " << node->data[i];
   }
   if (node->isLeaf == false) {
      traverse(node->child_ptr[i]);
   }
   cout<<endl;
}

int main() {
   int i, n, cari;
   int inp[] = {10, 20, 35, 40, 65, 50, 70, 80, 90, 100, 110, 120, 130, 180, 140, 160, 190, 240, 260};
   
	 cout<<"Masukkan banyak elemen : "; cin>>n; 
   cout<<"Masukkan nilai elemen : "<<endl;
   for(i = 0; i < n; i++) {
//   	  inp = (rand() + 1) % 100;
      cout<<i+1<<". "<<inp[i]<<endl;
      insert(inp[i]);
   }
   cout<<endl;
   cout<<"Hasil B-Tree : "<<endl;
   traverse(r);
   
   search_key(r, 10);
}

