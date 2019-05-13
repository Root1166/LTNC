#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
struct sinh_vien
{
    char ho_ten[20];
    int diem_tb;
}sv[20];
int main()
{
   int n,i;
    cout<<"Nhap danh sach sinh vien:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Sinh vien thu "<<i<<":"<<endl;
        cin.ignore(1);
        cout<<"Ho va ten:";
        gets(sv[i].ho_ten);
        cout<<"Diem trung binh:";
        cin>>sv[i].diem_tb;
    }
        cout<<"Da nhap xong va in ra danh sach sinh vien"<<endl;
        cout<<setiosflags(ios::left)<<setw(10)<<"STT"<<setw(20)<<"Ho va ten"<<"Diem"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setiosflags(ios::left)<<setw(10)<<i<<setw(20)<<sv[i].ho_ten<<sv[i].diem_tb<<endl;
    }
    return 0;
}
