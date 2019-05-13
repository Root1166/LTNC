#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<ctype.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
typedef struct SV{
    char ht[50];
    int sbd;
}sinh_vien;

class TS{
private:
    int sts;;
    SV *ts;
public:
    TS()
    {
        sts=0;
        ts=NULL;
    }
    void Input();
    void echoFile(char *tep);
    void readFile(const char *tep);
};

void TS::Input()
{
    cout<<"nhap thong tin cua sinh vien"<<endl;
    cout<<"nhap so sinh vien: ";
    cin>>sts;
    cin.ignore();
    int n=sts;
    ts = new SV[n+1];
    for(int i=1;i<=n;i++)
    {
        cout<<"Nhap sinh vien thu : "<<i<<endl;
        cout<<"HO ten: ";
        cin.getline(ts[i].ht,50);
        cout<<"SBD: ";
        cin>>ts[i].sbd;
        cin.ignore();
    }
}
void TS::echoFile(char *tep)
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
    f <<sts;
    f <<setprecision(1)<< setiosflags(ios::showpoint);
    for(int i=1;i<=sts;++i)
    {
        f<< endl <<setw(4)<<ts[i].ht<<setw(10)<<ts[i].sbd<<endl;
    }
    f.close();
}

int main()
{
    TS t;
    t.Input();
    t.echoFile("DS1.cpp");
    cout<<"\nEndl";
}
