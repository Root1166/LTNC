#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
using namespace std;
class TAMGIAC
{
private:
        double a,b,c;
public:
    tamgiac(double aa=0, double bb=0, double cc=0)
    {
        a=aa;
        b=bb;
        c=cc;
    }

    void nhap()//nhap cac canh cua mot tam giac
    {
        system("cls");
        cout<<"nhap ba canh cua mot tam giac\n";
        cout<<"\nnhap canh a = "; cin>>a;
        cout<<"\nnhap canh b = "; cin>>b;
        cout<<"\nnhap canh c = "; cin>>c;
        system("cls");
    }
    void xuat()// thong tin cua tam giac vua nhap
    {
        cout<<"\t\t\tThong tin cua tam giac\n";
        cout<<"\t\t  Canh a = "<<a<<"  Canh b = "<<b<<" Canh c = "<<c<<endl;
    }
    int hople()//kiem tra ba canh vua nhap co tao thanh 1 tam giac khong
    {
        if((a+b>c)&&(a+c>b)&&(b+c>a)&&(a>0)&&(b>0)&&(c>0))
            return 1;
        else return 0;
    }
    void phanloai()
    {
        if(((a!=b)&&(a!=c))||((b!=a)&&(b!=c))||((c!=a)&&(c!=b))){
        if ((a*a + b*b == c*c)||(a*a + c*c == b*b)||(b*b + c*c == a*a))
            cout<<"Tam giac vuong\n";
        else if ((a == b)||(a == c)||( b == c))
            cout<<"Tam giac can";
        else cout<<"Tam giac thuong\n";
        }
        else cout<<"Tam gia dieu\n";
    }
    double chuvi()// tinh chu cua tam giac
    {
        double p;
        p = (a + b + c );
        return p;
    }
    double dientich() // tinh dien tich cua tam giac
    {
        double p,s;
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        return s;
    }
};
int main()
{
    TAMGIAC a;
    a.nhap();
    a.xuat();
    cout<<endl;
    if(a.hople() == 1){
        cout<<"\nBa canh tao thanh 1 tam giac va do la ";
        a.phanloai();
        cout<<endl;
        cout<<"\nchu vi tam giac p = "<<a.chuvi();
        cout<<"\t\t\tDien tich tam giac S = "<<a.dientich();
    }
    else{
        cout<<"Ba canh vua nhap khong tao thanh  tam giac\n";
    }
    getch();
    return 0;
}
