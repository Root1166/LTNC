#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class Person
{
public:
char HT[50],NS[12],QQ[100];
void nhap();
//CN: Trần Xuân Thức - 5- tranxuanthuc.pci@gmail.comBài tập lập trình hướng đối tượng C++
void xuat();
Person()
{
strcpy(HT,"");strcpy(NS,"");strcpy(QQ,"");
}
};
class Diem
{
public:
int Dtoan;
int Dly;
int Dhoa;
void nhap();
void xuat();
Diem()
{
Dtoan=Dly=Dhoa=0;
}
};
class Hocsinh:public Person,public Diem
{
char Lop[30];
int TDiem;
public:
void nhap();
void xuat();
Hocsinh()
{
strcpy(Lop,"");TDiem=0;
}
};
void Person::nhap()
{
cout<<"Ho ten: ";gets(HT);fflush(stdin);
cout<<"Ngay sinh: ";gets(NS);fflush(stdin);
cout<<"Que quan: ";gets(QQ);fflush(stdin);
}
void Person::xuat()
{
cout<<"Ho ten: "<<HT<<endl;
cout<<"Ngay sinh: "<<NS<<endl;
cout<<"Que quan: "<<QQ<<endl;
}
void Diem::nhap()
{
cout<<"Diem toan: ";cin>>Dtoan;
cout<<"Diem ly: ";cin>>Dly;
//CN: Trần Xuân Thức - 6- tranxuanthuc.pci@gmail.comBài tập lập trình hướng đối tượng C++
cout<<"Diem hoa: ";cin>>Dhoa;
}
void Diem::xuat()
{
cout<<"Diem toan: "<<Dtoan<<endl;
cout<<"Diem ly: "<<Dly<<endl;
cout<<"Diem hoa: "<<Dhoa<<endl;
}
void Hocsinh::nhap()
{
Person::nhap();
cout<<"Lop: ";gets(Lop);fflush(stdin);
Diem::nhap();
TDiem=Dtoan+Dly+Dhoa;
}
void Hocsinh::xuat()
{
Person::xuat();
cout<<"Lop: "<<Lop<<endl;
Diem::xuat();
cout<<"Tong diem: "<<TDiem<<endl;
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
a[i].xuat();
getch();
}
