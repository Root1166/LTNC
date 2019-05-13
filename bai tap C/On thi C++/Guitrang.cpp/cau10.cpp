#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <ctype.h>
using namespace std;
class hoadon
{
private:
    char tenhang[50];
    float soluong,dongia,thanhtien;
    static int size;
public:
    int nhap(int i);
    void in(int);
    friend fstream& operator<<(fstream& fs,const hoadon & hd);
    friend fstream& operator>>(fstream& fs,hoadon & hd);
    int getthanhtien()
    {
        return thanhtien;
    }
};
int hoadon::size=sizeof(hoadon);
fstream& operator>>(fstream& fs,hoadon &hd)
{
    fs.read( (char*)(&hd),hoadon::size);
    return fs;
}
fstream& operator<<(fstream& fs,const hoadon &hd)
{
    fs.write( (char*)(&hd), hoadon::size);
    return fs;
}

void hoadon::in(int i)
{
    cout<<endl<<i<<"      "<<setiosflags( ios::left)<<setw(15)<<tenhang<<setw(15)<<soluong<<setw(15)<<dongia<<setw(12)<<thanhtien<<endl;
}
int hoadon::nhap(int i)
{
    cout<<"\nNhap thong tin cho cac san pham hang hoa\n"<<endl;
    cout<<"\nNhap so hang hoa: "<<i<<"  neu khong nhap thi break"<<endl;
    cout<<"Ten hang hoa: ";
    cin.get(tenhang,50);
    if(tenhang[0]==0)
        return 0;
    cout<<"\nNhap so luong: ";
    cin>>soluong;
    cout<<"\nDon Gia: ";
    cin>>dongia;
    cin.ignore();
    thanhtien = soluong * dongia;
}
int main()
{
    fstream f("solieu.cpp",ios::binary|ios::out|ios::in|ios::trunc);
    hoadon hd;
    int i =0;
    float tongtien=0;
    while(hd.nhap(++i))
    f<<hd;
    f.seekg(0,ios::beg);
     cout<<"\n\t\t\tSo lieu ban hang"<<endl;
    cout<<"\nSTT"<<setw(10)<<"Ten Hang"<<setw(15)<<"So luong"<<setw(15)<<"Don Gia"<<setw(15)<<"Thanh Tien"<<endl;
    while(f>>hd,!f.eof())
    {
        hd.in(++i);
        tongtien += hd.getthanhtien();
    }
    cout<<"\t\t\t\ttong="<<tongtien;
}
