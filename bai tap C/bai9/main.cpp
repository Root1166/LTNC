#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct TS{
    char ht[20];
    float t,l,h,td;
};

void nhapts(TS *ts,int n){
    for(int i=1;i<=n;++i){
        cout << "\nsinh vien thu" << i << " : ";
        cout << "\nHO ten: ";
        cin.ignore(1);
        cin.get(ts[i].ht,20);
        cout << "\nDiem toan: ";
        cin >> ts[i].t;
        cout << "\nDiem Ly: ";
        cin >> ts[i].l;
        cout << "\nDiem Hoa: ";
        cin >> ts[i].h;
        ts[i].td = ts[i].t + ts[i].l + ts[i].h;
    }
}
void hv(TS &ts1,TS &ts2){
    TS tg=ts1; ts1=ts2 ;ts2=tg;
}
void sapxep(TS *ts,int n ){
    for(int i=1;i<n-1;++i)
        for(int j=i+1;j<=n;++j)
        if(ts[i].td<ts[j].td)
        hv(ts[i],ts[j]);
    }


int main(){
    TS ts[100];
    int n,i;
    cout << " \nso thi sinh: ";
    cin >>n;
    nhapts(ts,n);
    sapxep(ts,n);
    float dc;
    cout << "\ndiem chuan ";
    cin >> dc;
    cout << "danh sach chung tuyen: ";
    cout << "\nHO ten " << "\t\tTongdiem ";
     for(i=1;i<=n;++i)
        if(ts[i].td>=dc) {
        printf("\n%5s",ts[i].ht);
        printf("\t\t%0.1f",ts[i].td);
         }
        else
            break;

     getch();

}
