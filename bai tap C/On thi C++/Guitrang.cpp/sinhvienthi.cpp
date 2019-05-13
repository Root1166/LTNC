#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#define MAX 100
using namespace std;
class Hoctap
{
public:
    int sobd;
    char ht[25];
    float dTB;

    void nhapTT()
    {
        cout<<"\nNhap Ma SV:";
        cin>>sobd;
        cout<<"\nHO ten: ";
        fflush(stdin);
        cin.getline(ht,25);
        cout<<"\nNhap Diem TB:";
        cin>>dTB;
    }
    void xuatTT()
    {
        cout<<setiosflags(ios::left)<<setw(15)<<sobd<<setw(20)<<ht<<setw(4)<<setiosflags(ios::left)<<dTB<<setw(4)<<endl;
    }
};

int main()
{
    Hoctap *ts;
    int n,i;
    float gioi=0, Kha=0, Tbinh=0, yeu=0,tongsv=0;
    cout<<"\n\t\tHoten: Bui van Cong \t\t\tLop: AT13clc01"<<endl;
    cout<<"\nNhap so sinh vien: ";
    cin>>n;
    ts = new Hoctap[n+1];
    for(int i=1;i<=n;i++)
    {
        system("cls");
        cout<<"\nNhap thong tin sinh vien thu "<<i<<endl;
        ts[i].nhapTT();
        system("cls");
    }
    cout<<"\n\t\tDanh sach cac sinh vien:"<<endl;
    cout<<setiosflags(ios::left)<<setw(15)<<"STT"<<setw(20)<<"HO ten"<<setw(15)<<"DiemTB"<<endl;
    for(int i=1;i<=n;i++)
    {
        ts[i].xuatTT();
    }
    for(int i =1;i<=n;i++)
    {
        if(ts[i].dTB >=8)
        {
            gioi++;
        }
        else if(ts[i].dTB>=7&&ts[i].dTB<=8)
        {
            Kha++;
        }
        else if(ts[i].dTB>=5&&ts[i].dTB<7)
        {
            Tbinh++;
        }
        else
        {
            yeu++;
        }
    }
     tongsv = gioi + Kha + Tbinh + yeu;
    cout<<"Tong sinh vien: "<<tongsv<<setw(15)<<"     Gioi: "<<gioi<<setw(10)<<"    Kha: "<<Kha<<setw(10)<<"   Trungbinh: "<<Tbinh<<setw(15)<<"   yeu: "<<yeu<<endl;
    system("pause");
    return 0;
}
