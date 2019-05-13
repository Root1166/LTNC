#include <new>
#include <iostream>
#include <stdlib.h>
#include <graphics.h>
#include <iomanip>
#include <conio.h>
using namespace std;
struct TS
{
    char hoten[50];
    float t,l,h,td;
};
/*void ints(const TS &ts,int n)
{

}*/
void nhapTS(TS *ts,int n)
{
    cout<<"\nnhap thong tin thi sinh: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"\nSinnh vien thu: "<<i+1<<endl;
        cout<<"\nHo ten: ";
        cin.ignore(1);
        cin.get(ts[i].hoten,50);
        cout<<"\nDiem toan: ";
        cin>>ts[i].t;
        cout<<"\nDiemly: ";
        cin>>ts[i].l;
        cout<<"\nDiem hoa: ";
        cin>>ts[i].h;
        ts[i].td = ts[i].t + ts[i].l + ts[i].h;
    }

}
void hv(TS &x,TS &y)
{
    TS tg=x;x=y;y=tg;
}
void sapxepTS(TS *ts,int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<=n;j++){
            if(ts[i].td<ts[j].td)
                hv(ts[i],ts[j]);
    }
}

int main()
{
    TS ts[100];
    int i,n;
    cout<<"nhap so sinh vien can nhap vao danh sach: ";
    cin>>n;
    nhapTS(ts,n);
    sapxepTS(ts,n);
    cout<<"Danh sach sinh vien duoc sap xep theo chieu Giam dan tong diem: "<<endl;
    cout<<"STT"<<setw(6)<<"Hoten"<<setw(15)<<"Tong diem"<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<i+1<<setw(6)<<ts[i].hoten<<setw(12)<<ts[i].td<<endl;
    }
}
