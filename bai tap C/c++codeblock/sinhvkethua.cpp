#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <graphics.h>
using namespace std;
class sinhvien
{
    char hoten[25];
protected:
    int sobd;
public:
    void nhap()
    {
        cout<<"\nNhap Ho ten: ";
        fflush(stdin);
        gets(hoten);
        cout<<"\nNhap SBD: ";
        cin>>sobd;
    }
    void hienthi()
    {
        //cout<<"\n Danh sach cac sinh vien \n"<<endl;
        cout<<"\nSBD : "<<sobd<<endl;
        cout<<"\nHo ten: "<<hoten<<endl;
    }
};
class diemthi: public sinhvien
{
protected:
    float d1,d2;
public:
    void nhap_diem()
    {
        cout<<"\nNhap diem thi 1: ";
        cin>>d1;
        cout<<"\nNhap diem thi 2: ";
        cin>>d2;
    }
    void hienthi_diem()
    {
        cout<<"\nDiem thi 1: "<<d1<<endl;
        cout<<"\nDiem thi 2: "<<d2<<endl;
    }

};
class ketqua: public diemthi
{
    float tong;
public:
    void display()
    {
        tong = d1 + d2;
        hienthi();
        hienthi_diem();
        cout<<"\nTong so diem : "<<tong<<endl;
    }
};
int main()
{
    int i,n; ketqua sv[100];
    cout<<"\n Nhap so sinh vien: ";
    cin>>n;
    //clrscr();
    for(i=0;i<n;++i)
    {
        sv[i].nhap();
        sv[i].nhap_diem();
    }
    for(i=0;i<n;++i)
    sv[i].display();
    getch();
}
