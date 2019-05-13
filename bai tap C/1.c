#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    struct{
    char ht[25];
    float toan,ly,hoa,TongDiem;
    }sv[50],tg;
    int n,i,j;
    cout << "nhap so thi sinh: ";
    cin >> n;
    for(i=1;i<=n;i++){
        cout << "\nthi sinh "<< i;
        cout << "\n Ho ten: ";
        cin.ignore(1);
        cin.get(sv[i].ht,25);
        cout << "Cac diem toan: ";
        cin >> sv[i].toan;
        cout << "Cac diem ly: ";
        cin >> sv[i].ly;
        cout << "Cac diem hoa: ";
        cin >> sv[i].hoa;
        sv[i].TongDiem = sv[i].toan + sv[i].ly + sv[i].hoa;
    }
    for (i=1;i<=n-1;++i)
        for(j=i+1;j<=n;++j)
        if(sv[i].TongDiem < sv[j].TongDiem){
            tg=sv[i];
            sv[i]=sv[j];
            sv[j]=tg;
    }
    cout <<"\n\t\t\tDanh sanh sinh vien duoc sap xep: ";
    for (i=1;i<=n;++i){
        cout << "\n\t\t\tHO ten: " << sv[i].ht;
        cout << "\t\t\tTong: " << sv[i].TongDiem;
    }

    getch();



}
