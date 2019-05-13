#include <iostream>
#include <conio.h>
#include <iomanip>
#include <graphics.h>
using namespace std;
struct DT
{
    double a[20];
    int n;
};
ostream &operator<<(ostream &os,DT d)
{
    os <<" - Cac he so (tu ao) :";
    for (int i=0 ;i<=d.n;++i)
    os << d.a[i] <<"";
    return os;
}
istream &operator >> (istream &is ,DT &d)
{
    cout<<"- Bac da thuc = ";
    cin>>d.n;
    cout<<"nhap cac he so cua da thuc : "<<endl;
    for(int i=0;i<=d.n;++i){
        cout<<"he so bac "<<i<<" = ";
        is >> d.a[i];
    }
    return is;
}
DT operator-(const DT &d)
{
    DT p;
    p.n=d.n;
    for(int i=0; i<=d.n; ++i)
        p.a[i] = -d.a[i];
    return p;

}
DT operator+(DT d1,DT d2)
{
    DT d;
    int k,i;
    k = d1.n > d2.n ? d1.n : d2.n;
    for (i =0; i<=k; ++i)
        if(i<=d1.n && i<=d2.n)
        {
            d.a[i] = d1.a[i] + d2.a[i];
        }
        else if(i<=d1.n)
        {
            d.a[i] = d1.n;
        }
        else
        {
            d.a[i] = d2.n;
        }
    i = k;
    while ( i>0 && d.a[i] ==0.0) --i;
    d.n = i;
    return d;
}
DT operator-(DT d1,DT d2)
{
    return (d1 + (-d2));
}
DT operator*(DT d1,DT d2)
{
    DT d;
    int k,i,j;
    k = d.n = d1.n + d2.n;
    for (i=0;i<=d1.n;++i)
        for(j=0;i<d2.n;++j)
         d.a[i+j] += d1.a[i] * d2.a[j];
    return d;
}
double operator^(DT d, double x)
{
    double s=0.0,t=1.0;
    for(int i=0;i<= d.n;++i)
    {
        s +=d.a[i] * t;
        t *= x;
    }
    return s;
}
int main()
{
    DT p,q,r,s,f;
    double x,g;
    cout<<"\t\t\tCHUONG TRINH TINH DA THUC f(X)"<<endl;
    cout<<"\t\tHO ten: Bui van Cong\t\tLop: AT13CLC01"<<endl;
    cout<<"nhap da thuc p: ";
    cin>> p;
    cout<<"nhap da thuc q: ";
    cin>> q;
    cout<<"nhap da thuc r: ";
    cin>> r;
    cout<<"nhap da thuc s: ";
    cin>> s;
    cout<<"nhap so thuc x: ";
    cin>> x;
    f = -(p + q) * (r - s);
    g = f ^ x;
    cout<<"Da thuc f = "<<f;
    cout<<"\n x = " <<x;
    cout<<"\n f(x) = "<<g;
    getch();
    return 0;

}
