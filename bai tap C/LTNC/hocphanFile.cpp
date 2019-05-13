#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<ctype.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
typedef struct HP{
    char tenhp[50];
    int stc;
}hoc_phan;

class MH{
private:
    int smh;;
    HP *mh;
public:
    MH()
    {
        smh=0;
        mh=NULL;
    }
    void Input();
    void WriteFile(const char *tep);
    void readFile(const char *tep);
    void xuat();
};

void MH::Input()
{
    cout<<"nhap thong tin cua cac hoc phan"<<endl;
    cout<<"nhap so mon hoc: ";
    cin>>smh;
    cin.ignore();
    int n=smh;
    mh = new HP[n+1];
    for(int i=1;i<=n;i++)
    {
        cout<<"Nhap mon hoc phan : "<<i<<endl;
        cout<<"Ten hoc phan: ";
        cin.getline(mh[i].tenhp,50);
        cout<<"STC: ";
        cin>>mh[i].stc;
        cin.ignore();
    }
}
void MH::WriteFile(const char *tep)
{
    ofstream f;
    f.open(tep,ios::out|ios::in);
    if (f.bad())
    {
    cout << "\nTep " << tep << " da ton tai";
    cout << "\nCo ghi de? - C/K";
    int ch;
    if (toupper(ch)=='C')
    {
        f.close();
        f.open(tep) ;
    }
    else
        exit(1);
    }
    f <<smh;
    f <<setprecision(1)<< setiosflags(ios::showpoint);
    for(int i=1;i<=smh;++i)
    {
        f<< endl <<setw(0)<<mh[i].tenhp<<setw(10)<<mh[i].stc<<endl;
    }
    f.close();
}
void MH::readFile(const char *tep)
{
    ifstream f;
    f.open(tep);
    if (f.bad())
    {
    cout << "\nTep " << tep << " khong ton tai";
    exit(1);
    }
    f >> smh ;
    f.ignore();
    if (mh!=NULL) delete mh;
    mh = new HP[smh+1];
    for(int i=1;i<=smh;++i)
    {
        f.get(mh[i].tenhp,50);
        f>>mh[i].stc;
    }
    f.close();
}
void MH::xuat()
{
    cout << "\n\nSo mh: " << smh;
    cout << setprecision(1) << setiosflags(ios::showpoint);
    for (int i=1; i<=smh; ++i)
    {
    cout << "\nMon hoc: " << i ;
    cout << "\nTen hoc phan: " << mh[i].tenhp ;
    cout << "\nSTC: " << mh[i].stc ;
    }
}
int main()
{
    MH mh;
    mh.Input();
    mh.WriteFile("DS1.cpp");
    mh.readFile("DS1.cpp");
    mh.xuat();
    cout<<"\nEndl";
}
