#include<iostream>
using namespace std;
class DT
{
    int a[20],n;
public:
    friend istream &operator>>(istream &in,DT &x)
    {
        int i;
        cout<<"Nhap bac cua da thuc:";
        in>>x.n;
        in>>x.a[0];
        for(i=1;i<x.n;i++)
        {
            cout<<"\nHe so cua x^"<<i<<":";
            in>>x.a[i];
        }
        return in;
    }
    friend ostream &operator<<(ostream &ou,DT &x)
    {
        int i;
        ou<<x.a[0];
        for(i=1;i<x.n;i++)
        {
            if(x.a[i]==0) continue;
            else if(x.a[i]<0)
            ou<<x.a[i]<<"x^"<<i;
            else
            ou<<"+"<<x.a[i]<<"x^"<<i;
        }
        return ou;
    }
    DT operator+(DT &b)
    {
        int i;
        DT c;

        c.n=b.n;
        for(i=0;i<c.n;i++)
        {
            c.a[i]=0;
            c.a[i]=this->a[i]+b.a[i];
        }
        return c;
    }
};
int main()
{
    DT a,b,c;
    cout<<"Nhap da thuc cho day a:"<<endl;
    cin>>a;
    cout<<a;
    cout<<"\nNhap da thuc cho day b:"<<endl;
    cin>>b;
    cout<<b;
    c=a+b;
    cout<<"\nIn day da thuc cua c: ";
    cout<<c;

}
