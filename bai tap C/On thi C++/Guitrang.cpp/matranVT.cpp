#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class VT;
class MT;
class VT
{
private:
    int n;
    double x[20];
public:
    void input();
    friend void display(const VT &x);
    friend VT tich(const MT &a,const VT &x);
};
class MT
{
private:
    int n;
    double a[20][20];
public:
    friend VT tich(const MT &a,const VT &x);
    friend void display(const MT &a);
    void input();
};
void VT::input()
{
    cout<<"\nNhap cap cua VT: ";
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cout<<"\nNhap phan tu thu "<<i<<":  ";
        cin>>x[i];
    }
}
void MT::input()
{
    cout<<"\nNhap cap cua ma tran: ";
    cin>>n;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
        {
            cout<<"a ["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
}

VT tich(const MT &a,const VT &x)
{
    VT y;
    int n = a.n;
    if( n != x.n)
        return x;
    y.n = n;
    for(int i=1;i<=n;++i)
    {
        y.x[i] = 0;
        for(int j=1;j<=n;++j)
            y.x[i] += a.a[i][j]*x.x[i];
    }
    return y;

}
void display(const VT &x)
{
    cout<<"\n";
    for(int i=1;i<=x.n;++i)
        cout<< x.x[i] <<"  ";
}
void display(const MT &a)
{
    for(int i=1 ;i<=a.n;++i)
    {

    cout<<"\n";
     for(int j=1;j<=a.n;++j)
        cout<< a.a[i][j];
        cout<<endl;
    }
    cout<<" \n   ";
}

int main()
{
    MT a; VT x,y;
    a.input();
    x.input();
    cout<<"MT A:  ";
    display(a);
    cout<<"\n\nVeTor x: ";
    display(x);
    cout<<"\n\nVetor y = Ax: ";
    y=tich(a,x);
    display(y);
}
