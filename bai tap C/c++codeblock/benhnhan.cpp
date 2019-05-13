#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;
class Benhnhan
{
protected:
    char hoten[50];
    char que[30];
    int namsinh;
public:
    void nhap()
    {
        cout<<"\nHo Ten : ";
        fflush(stdin);cin.getline(hoten,50);
        cout<<"\nQue quan : ";
        fflush(stdin);cin.getline(que,30);
        cout<<"\nNhap Ngay sinh: ";
        cin>>namsinh;
    }
    void Xuat()
    {
        cout<<"\n\r\t\tThong tin cua nguoi benh"<<endl;
        cout<<"Ho ten: "<<hoten<<endl;
        cout<<"Que: "<<que<<endl;
        cout<<"Nam sinh: "<<namsinh<<endl;

    }
};
class Benhan:public Benhnhan
{
public:
    char Tenbenhan[30];
    double tienvp;
   int tuoi()
    {
       int tuoi;
       tuoi = 2017-namsinh;
       return tuoi;
    }
    void nhap()
    {
        Benhnhan::nhap();
        cout<<"\nNhap ten benh an: ";
        fflush(stdin);
        cin.getline(Tenbenhan,30);
        cout<<"\nNhap Tien Vien Phi: ";
        cin>>tienvp;
    }
    void Xuat()
    {
        Benhnhan::Xuat();
        cout<<"Ten benh an: "<<Tenbenhan<<endl;
        cout<<"Tien vien phi: "<<tienvp<<endl;
    }
};
int main()
{
    Benhan a[50];
    int i,j,n;
   do
   {
        cout<<"\n\t\t\rNhap danh sach cac benh nhan:"<<endl;
        cout<<"Nhap so benh nhan: ";
        cin>>n;
   }while(n<0);
   system("cls");
   for(i=0;i<n;i++)
   {
       cout<<"\nNhap thong tin cho benh nhan so: "<<i+1<<endl;
       a[i].nhap();
   }
   for (i=0; i<n; i++)
    system("cls");
    //sap xep benh nhan theo chieu giam d tuoi;
    for( i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[j].tuoi() < a[i].tuoi())
            {
                Benhan Tg =a[i];
                a[i]=a[j];
                a[j]=Tg;
            }
        }
    }
    cout<<"================================================"<<endl;
    cout<<"\nDanh sach cac benh nhan co do tuoi tang dan "<<endl;
    for(int i=0;i<n;i++)
    {
        a[i].Xuat();
    }
    cout<<"================================================"<<endl;
    cout<<"\nDanh sach benh nhan nho hon 10 tuoi"<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i].tuoi() <10)
        a[i].Xuat();
    }
}
