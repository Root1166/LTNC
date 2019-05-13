#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
class TS
{
protected:
    char hoten[50];
    int MaSV;
    char khoi;
public:
    TS()
    {
        hoten[0]=MaSV=0;
        khoi = NULL;
    }
    virtual void nhap()=0;
    virtual void xuat()=0;
    char getkhoi()
    {
        return khoi;
    }
};
class khoiA: public TS
{
private:
    float toan,ly,hoa;
    float Tong;
public:
    khoiA():TS()
    {
        toan=hoa=ly=0;
    }
   virtual void nhap()
    {
        khoi ='A';
        cout<<"\nMa SV: ";
        cin>>MaSV;
        cout<<"\nHo Ten : ";
        cin.ignore(1);
        cin.get(hoten,50);fflush(stdin);
        cout<<"Diem toan:";cin>>toan;
        cout<<"Diem Ly: ";cin>>ly;
        cout<<"Diem Hoa: ";cin>>hoa;
        Tong  = toan + ly + hoa;
    }
    virtual void xuat()
    {
        cout<<setiosflags(ios::left)<<setw(6)<<MaSV<<setiosflags(ios::right)<<setw(6)<<toan<<setw(6)<<ly<<setw(6)<<hoa<<endl;
    }
};
class khoiC:public TS
{
private:
    float van,su,dia;
    float Tong;
public:
    khoiC():TS()
    {
        van=su=dia=0;
    }
     virtual void nhap()
    {
        khoi='C';
        cout<<"\nMa SV: ";
        cin>>MaSV;
        cout<<"\nHo Ten : ";
        cin.ignore(1);
        cin.get(hoten,50);fflush(stdin);
        cout<<"Diem van:";cin>>van;
        cout<<"Diem su: ";cin>>su;
        cout<<"Diem dia: ";cin>>dia;
        Tong  = van + su + dia;
    }
    virtual void xuat()
    {
        cout<<setiosflags(ios::left)<<setw(6)<<MaSV<<setiosflags(ios::right)<<setw(6)<<van<<setw(6)<<su<<setw(6)<<dia<<endl;
    }
};
int main()
{
    TS *ds[100],*p;
    int n,i,j,vt;
    char khoi;
    n=0;
    while(1)
    {
        cout<<"\nNhap thi sinh "<<++n<<"Khong nhap khoi thi ket thuc"<<endl;
        cout<<"\nNhap khoi: ";
        cin>>khoi;
        if( khoi == 'A')
        {
            ds[++n] = new khoiA;
            ds[n]->nhap();
        }
        else if (khoi == 'C')
        {
            ds[++n] = new khoiC;
            ds[n] ->nhap();
        }
        else
        {
            break;

        }
            //default: cout<<"\nChuong trinh chi nhap cho sinh vien khoi A va C ok"<<endl;
            continue;
    }
}
