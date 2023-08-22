#include <iostream>
using namespace std;

struct Komposisi {
  int id;
  char* name;
  char* department;
};
typedef Komposisi data_siswa;



class Classroom {
  public:
    data_siswa daftar_siswa[100];
    char* class_room;
};

int main()
{
  data_siswa k;
  k.id=0;
  k.name="Hilman";
  k.department="informatics";

  printf("id:%d|name:%s|department:%s",k.id,k.name,k.department);

  Classroom* c_room=new Classroom();
  c_room->class_room="Data Structure";
  c_room->daftar_siswa[0]=k;
  printf("ClassRoom:%s|id:%d|name:%s|department:%s", c_room->class_room, c_room->daftar_siswa[0].id, c_room->daftar_siswa[0].name, c_room->daftar_siswa[0].department);
}
