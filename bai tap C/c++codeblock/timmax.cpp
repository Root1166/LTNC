#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <graphics.h>
#include <iomanip>
using namespace std;
InputDso(int *a,int n)
{
    for(int i=1;i<=n;++i)
    {
        cout<<"phan tu thu " <<i<<" = ";
        cin>>a[i];
    }

}
InputDso(double *x,int n)
{
    for (int i=1;i<=n;++i)
    {
        cout<<"phan tu thu " <<i<<" = ";
        cin>>x[i];
    }
}
int max(int x, int y)
{
    return x > y ? x : y;
}
double max(double x, double y)
{

    return x > y ? x : y;
}
int max(int *x,int n)
{

    int s = x[1];
    for (int i=2; i<=n;++i)
        s = max(s,x[i]);
    return s;
}
double max(double *x, int n)
{
    double s = x[1];
    for( int i=2;i<=n;++i)
        s = max(s,x[i]);
    return s;
}
int main()
{
    int a[20], n, ni, nd, maxi;
    double x[20], maxd;
    cout<<"so phan tu nguyen ni: ";
    cin>>ni;

    cout<<"nhap day so nguyen: "<<endl;
    InputDso(a,ni);
    cout<<"nhap day so thuc nd: ";
    cin>>nd;
    cout<<"nhap day so thuc nd : "<<endl;
    InputDso(x,nd);
    maxi = max(a,ni);
    maxd = max(x, nd);
    cout<<"Max cau day nguyen : "<<maxi<<endl;
    cout<<"Max cua day thuc : "<<maxd<<endl;
    getch();
    return 1;
}
