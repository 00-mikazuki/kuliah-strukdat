#include <iostream>

using namespace std;

void replace(char* c, string text)
{
  text = "Mi";

  text.copy(c, sizeof(text));

}

int main()
{
  string teks = "Hello World";
  string nama = "Juan";
  char* c = &teks.at(0);
  replace(c, teks);
  cout << "print: "<< teks << endl;

  char* d = &nama.at(0);
  replace(d, nama);
  cout << "print: "<< nama << endl;

  return 0;
}


// void replace(char* c, string text)
// {

//     char* a = &text.at(0);
//     *c = *a;
    
//     // return teks;

// }

// int main()
// {
//   string teks = "Hello World";
//   char* c = &teks.at(0);
//   string text = "Mi";
//   // string chg = 
//   replace(c, text);
//   cout << "print: "<< teks << endl;

//   return 0;
// }

