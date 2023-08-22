#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    const int number = 10;
    int arr[number]={0,1,2,3,4,5,6,7,8,9}; // allocation stack of integer array
    int *pArr=new int[number];   // ← Allocation heap of integer array
    int *p=&arr[0];  // pointer of array index
    int *pArray[number];
    pArray[0]=&arr[0];
    printf("%d",*p);
    cout<<"\n"<<p<<"\n"<<&arr[0]<<"\n"<<*(p+1)<<endl;
    cout<<"\n"<<*(pArray[0])<<endl;

    return 0;
}
