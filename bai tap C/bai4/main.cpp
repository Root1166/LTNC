#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
struct{
    char ht[20];
    int tuoi;
    float toan,ly,hoa,td;
}ts[50],tg;
int main()
{
    int n,i,j;
    cout <<" nhap  so sinh vien ";
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cout <<"sinh vien thu "<< i;
        cout << "\nHO Ten: ";
        cin.ignore(1);
        cin.get(ts[i].ht,20);
        cout <<" \nDiem toan la: ";
        cin >> ts[i].toan;
        cout <<" \nDiem ly la: ";
        cin >> ts[i].ly;
        cout <<" \nDiem Hoa la: ";
        cin >> ts[i].hoa;
        ts[i].td=ts[i].toan+ts[i].ly+ts[i].hoa;
    }
    for(i=1;i<n-1;i++)
        for(j=i+1;j<=n;j++)
        if(ts[i].td<ts[j].td){
            tg=ts[i];
            ts[i]=ts[j];
            ts[j]=tg;
        }
    cout << "danh sach: ";
    for(i=1;i<=n;i++)
    {
        cout <<"\nHo ten: "<<ts[i].ht;
        cout <<"\nTdiem: "<<ts[i].td;
    }
	
    getchar();
}
