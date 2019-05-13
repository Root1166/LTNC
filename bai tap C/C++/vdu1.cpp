#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <iostream>
using namespace std;
class Person
{
public:
    char hoten[50];
    char ngaysinh[12];
    char Quequan[100];
    void nhap();
    void Xuat();
Person()
    {
        strcpy(hoten,"");strcpy(ngaysinh,"");strcpy(Quequan,"");
    }
};

class Diem
{
public:
    int Diemtoan;
    int DiemLy;
    int DiemHoa;
    void nhap();
    void Xuat();
    Diem()
    {
        Diemtoan=DiemHoa=DiemLy=0;
    }
};
class Hocsinh:public Person,public Diem
{
    char Lop[50];
    int Tongdiem;
public:
    void nhap();
    void Xuat();
Hocsinh()
    {
        strcpy(Lop,"");Tongdiem=0;
    }
};
void Person::nhap()
    {
        cout<<"\nHo ten: ";	cin.ignore(1);
        cin.get(hoten,50);fflush(stdin);
        cout<<"\nNgay sinh: ";gets(ngaysinh);fflush(stdin);
        cout<<"\nQue Quan: ";gets(Quequan); fflush(stdin);
    }

void Person::Xuat()
    {
        cout<<"\nHo ten: "<<hoten<<endl;
        cout<<"\nNgay sinh: "<<ngaysinh<<endl;
        cout<<"\nQue quan: "<<Quequan<<endl;
    }
void Diem::nhap()
    {
        cout<<"\nMoi banh nhap diem thi cua 3 mon toan ly hoa:"<<endl;
        cout<<"\nDiem toan: ";
        cin>>Diemtoan;
        cout<<"\nDiem lyy: ";
        cin>>DiemLy;
        cout<<"\nDiem Hoa: ";
        cin>>DiemHoa;
    }
void Diem::Xuat()
    {
        cout<<"\nDiem thi tat ca cac mon toan ly hoa:"<<endl;
        cout<<"\nDiem toan: "<<Diemtoan;
        cout<<"\nDiem ly : "<<DiemLy;
        cout<<"\nDiem Hoa: "<<DiemHoa;
    }

void Hocsinh::nhap()
    {
        Person::nhap();
       // cout<<"Nhap thong tin cua cac thi sinh :"<<endl;
        cout<<"\nLop: ";
        gets(Lop);fflush(stdin);
        Diem::nhap();
        Tongdiem = Diemtoan + DiemLy + DiemHoa;
    }
void Hocsinh::Xuat()
    {
        Person::Xuat();
        cout<<"Lop: "<<Lop<<endl;
        Diem::Xuat();
        cout<<"\nTong diem: "<<Tongdiem<<endl;
    }

int main()
{
    int n;
    Hocsinh a[100];
    cout<<"Nhap tong so hoc sinh: ";cin>>n;
    for(int i=0;i<n;i++)
    a[i].nhap();
    cout<<"Thong tin hoc sinh vua nhap:\n ";
    for(int i=0;i<n;i++)
    a[i].Xuat();
    getch();
}
