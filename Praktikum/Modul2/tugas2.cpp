#include <iostream>

using namespace std;

void replace(string* change, string* text)
{
  *text = *change;


}

int main()
{
  string teks = "Hello World";
  cout << "Template: "<< teks << endl;
  string change;
  cout << "Change: ";
  getline(cin, change);

  string* t = &teks;
  string* c = &change;

  replace(c, t);

  cout << "Hasil: " << teks << endl;

  return 0;
}