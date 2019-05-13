#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <cmath>
using namespace std;
class PS
{
public:
    int t,m;
    PS(int t1=0,int m1=1)
    {
        t = t1;
        m = m1;
    }
public:
    void inputPS()
    {

        cout<<"\nNhap tu so : ";   cin>>t;
        cout<<"\nNhap mau so : ";  cin>>m;
    }
    int ucln(int a, int b)
    {
        int x,y;
        x = abs(a);
        y = abs(b);
        if (x*y==0) return 1;
        while(x!=y)
        {
            if(x > y)
                x = x - y;
            else
                y = y - x;
        }
        return x;
    }
    friend PS operator+(PS a,PS b)
    {
        PS c;
        c.t = a.t*b.m + b.t*a.m;
        c.m = a.m * b.m;
        return c;
    }
    friend PS operator-(PS a,PS b)
    {
        PS c;
        c.t = a.t*b.m - b.t*a.m;
        c.m = a.m * b.m;
        return c;
    }
    friend PS operator*(PS a,PS b)
    {
        PS c;
        c.t = a.t * b.t;
        c.m = a.m * a.m;
        return c;
    }
    friend PS operator/(PS a,PS b)
    {
        PS c;
        c.t = a.t * b.m;
        c.m = a.m * b.t;
        return c;
    }
    void displayPS()
    {
       cout<<t/ucln(t,m)<<"/"<<m/ucln(t,m);
    }
};

int main()
{
    PS a,b,c,d,f,e;
    system("cls");
    cout<<"\n\t\t\tChuong trinh tinh cac phep toan cua 2 phan so "<<endl;
    cout<<"\n\t\tHo ten : Bui van Cong \t\t\tLop:AT13CLC01"<<endl;
    cout<<"\nNhap Phan so thu nhat "<<endl;
    a.inputPS();
    cout<<"\nNhap phan so thu hai "<<endl;
    b.inputPS();
    system("cls");
    c = a + b; d = a - b; f = a * b; e = a / b;
    cout<<"\n\t\t\tCac phep toan PS \n";
    cout<<"Tong = ";
    c.displayPS();
    cout<<"\nHieu = ";
    d.displayPS();
    cout<<"\nTich = ";
    f.displayPS();
    cout<<"\nThuong = ";
    e.displayPS();
    getch();
}
