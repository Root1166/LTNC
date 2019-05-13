// Sinh viên Dương Thành Vịnh - AT13CLC01

#include <bits/stdc++.h>
using namespace std;

class SV {
  // Sinh viên Dương Thành Vịnh - AT13CLC01
  private:
    unsigned int id;
    char* name;
    float point;
    SV* next;
  public:
    // constructors:
    SV (){
      next = NULL;
    }
    SV (unsigned int id, char* name, float point){
      this->id = id;
      this->name = name;
      this->point = point;
      next = NULL;
    }
    // destructor
    ~SV () {
      delete name;
    }
    // getters:
    char* getName() {
      return this->name;
    }
    unsigned int getID() {
      return this->id;
    }
    float getPoint() {
      return this->point;
    }
    SV* getNext() {
      return this->next;
    }
    // setters:
    void setName(char* name) {
      this->name = name;
    }
    void setID(unsigned int id) {
      this->id = id;
    }
    void setPoint(float point) {
      this->point = point;
    }
    void setNext(SV* sv) {
      this->next = sv;
    }
    // methods
    void echo () {
      cout << id << '\t' << name << '\t' << point << endl;
    }

}; // SV

int main () {
  // Sinh viên Dương Thành Vịnh - AT13CLC01
  // Nhập
  system("clear");
  char input;
  unsigned int i = 0;
  SV* start = NULL;
  SV* current = NULL;
  do {
    i++;
    char* name = (char*) malloc(100*sizeof(char));
    float point;
    unsigned int id;
    cout << "nhap sinh vien thu " << i << ":\n";
    cout << "ID: ";
    cin >> id;
    cin.ignore(1);
    cout << "Ten: ";
    gets(name);
    cout << "Điem: ";
    cin >> point;
    SV* tmp = new SV(id, name, point);
    if(current) {
      current->setNext(tmp);
    }
    current = tmp;
    if(!start){
      start = tmp;
    }
    cin.ignore(1);
    system("clear");
    cout << "\nBan muon nhap tiep? [Enter to exit]\n";
    input = getchar();
    system("clear");

  }while(input != 10 && input != 13);

  // Xuất
  cout << "Danh sach sinh vien vua nhap: \n";
  current = start;
  while(current){
    current->echo();
    current = current->getNext();
  }

  input = getchar();
  system("clear");
  // Sắp xếp theo ID
  current = start;
  while(current){
    SV* current2 = current->getNext();
    while(current2){
      if(current->getID() > current2->getID()) {
        // tmp = $1
        SV* tmp = new SV(current->getID(), current->getName(), current->getPoint());

        // $1 = $2
        current->setID(current2->getID());
        current->setName(current2->getName());
        current->setPoint(current2->getPoint());

        // $2 = tmp
        current2->setID(tmp->getID());
        current2->setName(tmp->getName());
        current2->setPoint(tmp->getPoint());
      }
      current2 = current2->getNext();
    }
    current = current->getNext();
    if(current->getNext() == NULL) continue;
  }
  // Xuất
  cout << "Danh sach sinh vien sap xep  ID: \n";
  current = start;
  while(current){
    current->echo();
    current = current->getNext();
  }

  input = getchar();
  system("clear");
  bool found = false;
  // Xoá một sinh viên bất kì với ID
  unsigned int ID;
  cout << "\nNhap ID sinh vien muon xoa";
  cin >> ID;
  cin.ignore(1);
  current = start;
  while(current){
    SV* nextCurrent = current->getNext();
    if(current->getID() == ID) {
      start = nextCurrent;
      delete current;
      found = true;
      continue;
    }
    if (nextCurrent) {
      if (nextCurrent->getID() == ID) {
        current->setNext(nextCurrent->getNext());
        delete nextCurrent;
        found = true;
        continue;
      }
    }
    current = current->getNext();
  }
  if(found) {
    // Xuất
    cout << "Danh sach sinh vien sau khi xoa: \n";
    current = start;
    while(current){
      current->echo();
      current = current->getNext();
    }
  }else{
    cout << "Khong tim thay sinh vien co id = " << ID << endl;
  }

  input = getchar();
  system("clear");
  // Thêm 1 sinh viên vào vị trí bất kì
  unsigned int id;
  char* name = (char* )malloc(100*sizeof(char));
  float point;
  cout << "\nNhap ID sinh vien muon them vao (0 - them vao dau):";
  cin >> ID;
  cout << "\nNhap sinh vien:";
  cout << "\nID: ";
  cin >> id;
  cin.ignore(1);
  cout << "Ten: ";
  gets(name);
  cout << "Điem: ";
  cin >> point;
  SV* newSV = new SV(id, name, point);
  if (ID == 0) {
    newSV->setNext(start);
    start = newSV;
  }else{
    current = start;
    while(current){
      if(current->getID() == ID){
        newSV->setNext(current->getNext());
        current->setNext(newSV);
      }
      current = current->getNext();
    }
  }
  // Xuất
  cout << "Danh sach sinh vien sau khi them: \n";
  current = start;
  while(current){
    current->echo();
    current = current->getNext();
  }

  cin.ignore(1);
  input = getchar();
  return 0; // return normally
}
