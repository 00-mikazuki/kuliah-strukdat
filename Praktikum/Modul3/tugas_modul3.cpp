#include <iostream>
using namespace std;

struct Komposisi {
  string* id;
  string* name;
  string* department;
};
typedef Komposisi dataDept;

class Classroom {
  public:
    dataDept dataLect[100];
    dataDept dataStud[100];
    string* classR;
};


int main()
{
  dataDept stud;
  stud.id = 0;
  stud.name = "Juan";
  stud.department = "Informatics";

  dataDept lect;
  lect.id = 0;
  lect.name = "Hermawan";
  lect.department = "Informatics";

  Classroom* c_room = new Classroom();
  c_room->classR = "Data Structure";
  c_room->dataLect[0] = lect;
  c_room->dataStud[0] = stud;



}
