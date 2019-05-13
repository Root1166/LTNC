#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
using namespace std;
class PS
{
public:
    int t,m;
    PS(int t1=0,int m1=0)
    {
        t=t1;
        m=m1;
    }
public:
    void inputPS()
    {
        cout<<"\nNhap tu so: ";
        cin>>t;
        cout<<"\nNhap mau so: ";
        cin>>m;
    }
    int ucln(int a,int b)
    {
        int x,y;
        x = abs(a);
        y = abs(b);
        if(x*y==0) return 1;
        while(x!=y)
        {
            if (x>y)
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
        c.t = a.t*b.m - a.m*b.t;
        c.m = a.m*b.m;
        return c;
    }
      friend PS operator*(PS a,PS b)
    {
        PS c;
        c.t = a.t * b.t;
        c.m = a.m * b.m;
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
    PS a,b,c,d,e,f;
    system("cls");
    cout<<"\n\t\t\tChuong trinh tinh Cac phuong thuc cua phan so"<<endl;
    cout<<"\n\t\t\tHo ten:Bui van cong \t\t\tLop"<<endl;
    cout<<"\nNhap phan so A: "<<endl;
    a.inputPS();
    cout<<"\nNhap phan so B: "<<endl;
    b.inputPS();
    system("cls");
    c = a + b; d = a - b; f = a * b; e = a / b;
    cout<<"\nTong hai phan so A + B:   ";
    c.displayPS();
    cout<<"\nHieu 2 phan so A - B:     ";
    d.displayPS();
    cout<<"\nTich hai phan so A * B:   ";
    f.displayPS();
    cout<<"\nThuong 2 phan so A / B:   ";
    e.displayPS();
    cout<<endl;
      system("pause");
    return 0;

}
