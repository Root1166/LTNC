#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <iomanip>
#include <stdio.h>
#define MAX 100
using namespace std;
struct TS
{
    char ht[20];
    long sobd;
    float td;

};
void Nhapdanhsach(char *A[],int &n)
{

    TS *ts;
    cout<<"\nNhap so sinh vien : ";
    cin>>n;
    ts = new TS[n+1];
    if(ts==NULL)
    {
        cout<<"\nLoi cap phat bo nho\n";
        getch();
        exit(0);
    }
    for(int i=1;i<=n;++i)
    {
        cout<<"\nSinh vien thu "<<i<<endl;
        cout<<"\nHo ten: ";
        cin.ignore(1);
        cin.get(ts[i].ht,20);
    }
}
void InterchangeSort(char *A[],int n)
{
    char *temp;
    for(int i= 0;i<n -1;i++)
    {
        for(int j = i+1;j<=n;j++)
        {
            if((A[i]==A[j]==1))
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
XuatDanhsach(char *A[],int n)
{
    TS *ts;
    cout<<"STT"<<setw(13)<<"Ho Ten";
    for(int i=1;i<=n;++i)
        cout<<"\n "<<i<<setw(20) << ts[i].ht;

}


int main()
{
    int n;
    char *A[MAX];
    Nhapdanhsach(A,n);
    XuatDanhsach(A,n);
    InterchangeSort(A,n);
    cout<<"\n\t\tDanh sach cac sinh vien duoc sap xap theo ABC :"<<endl;
    XuatDanhsach(A,n);

    getch();
    return 0;
}
