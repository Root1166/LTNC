#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class NhaSX
{
public:
    char TenNSX[30];
    char DC[30];
friend class May;
friend class Maytinh;
//friend void In(Maytinh *a,int n);
//friend void Xoa(Maytinh *a,int *n);
};
class May
{
public:
char NH[30];
NhaSX NSX;
float GT;
void nhap();
void xuat();
};
class Maytinh:public May
{
float TD;
int DLR;
int DLHDD;
public:
void nhap();
void xuat();
//CN: Trần Xuân Thức - 8- tranxuanthuc.pci@gmail.comBài tập lập trình hướng đối tượng C++
friend void In(Maytinh *a,int n);
friend void Sap(Maytinh *a,int n);
friend void Xoa(Maytinh *a,int *n);
};
void May::nhap()
{
cout<<"Nhan hieu: ";cin.ignore(1);
cin.get(NH,30);fflush(stdin);
cout<<"Ten NSX: ";gets(NSX.TenNSX);fflush(stdin);
cout<<"Dia chi: ";gets(NSX.DC);fflush(stdin);
cout<<"Gia thanh: ";cin>>GT;
}
void May::xuat()
{
cout<<"Nhan hieu: "<<NH<<endl;
cout<<"Ten NSX: "<<NSX.TenNSX<<endl;
cout<<"Dia chi: "<<NSX.DC<<endl;
cout<<"Gia thanh: "<<GT<<endl;
}
void Maytinh::nhap()
{
May::nhap();
cout<<"Toc do: ";cin>>TD;
cout<<"Dung luong Ram: ";cin>>DLR;
cout<<"Dung luong HDD: ";cin>>DLHDD;
}
void Maytinh::xuat()
{
May::xuat();
cout<<"Toc do: "<<TD<<endl;
cout<<"Dung luong Ram: "<<DLR<<endl;
cout<<"Dung luong HDD: "<<DLHDD<<endl;
}
void In(Maytinh a[100],int n)
{
for(int i=0;i<n;i++)
if(strcmp(a[i].NSX.TenNSX,"IBM")==0)
//CN: Trần Xuân Thức - 9- tranxuanthuc.pci@gmail.comBài tập lập trình hướng đối tượng C++
a[i].xuat();
}
void Sap(Maytinh a[100],int n)
{
int i,j;
Maytinh tg;
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(a[j].GT<a[i].GT)
{
tg=a[i];
a[i]=a[j];
a[j]=tg;
}
}
void Xoa(Maytinh a[100],int *n)
{
for(int i=0;i<*n;i++)
while(strcmp(a[i].NSX.TenNSX,"Intel")==0)
{
for(int j=i;j<*n;j++)
a[j]=a[j+1];
*n=*n-1;
}
}
int main()
{
int n,i;
Maytinh a[100];
cout<<"n= ";cin>>n;
for(i=0;i<n;i++)
a[i].nhap();
cout<<"---May tinh cua hang IBM---\n";
In(a,n);
cout<<"---Sap xep may tinh tang dan theo gia---\n";
Sap(a,n);
//CN: Trần Xuân Thức - 10- tranxuanthuc.pci@gmail.comBài tập lập trình hướng đối tượng C++
//CN: Trần Xuân Thức - 11- tranxuanthuc.pci@gmail.com
for(i=0;i<n;i++)
a[i].xuat();
cout<<"---DS may tinh con lai sau khi xoa---\n";
Xoa(a,&n);
for(i=0;i<n;i++)
a[i].xuat();
getch();
}
