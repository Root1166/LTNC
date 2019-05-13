#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;
class complex
{
public:
    float thuc,ao;
    complex(float thuc1=0,float ao1=0)
    {
        thuc = thuc1;
        ao = ao1;
    }
public:
    void inputsophuc()
    {
        cout<<"\nnhap phan thuc a = ";
        cin>>thuc;
        cout<<"nhap phan ao b = ";
        cin>>ao;
    }
    friend complex operator +(complex a,complex b){
        complex c;
        c.thuc = a.thuc + b.thuc;
        c.ao = a.ao + b.ao;
        return c;
    }
    friend complex operator -(complex a,complex b){
        complex c;
        c.thuc = a.thuc - b.thuc;
        c.ao = a.ao - b.ao;
        return c;
    }
    friend complex operator *(complex a,complex b){
        complex c;
        c.thuc = a.thuc*b.thuc - a.ao*b.ao;
        c.ao = a.thuc*b.ao + a.ao*b.thuc;
        return c;
    }
    friend complex operator /(complex a,complex b){
        complex c;
        float tongbp;
        tongbp=pow(b.thuc,2)+pow(b.ao,2);
        c.thuc=(a.thuc*b.thuc-a.ao*b.ao)/tongbp;
        c.ao=(a.thuc*b.ao+a.ao*b.thuc)/tongbp;
        return c;
    }
    void display()
    {
        cout<<"("<<thuc<<","<<ao<<")"<<endl;
    }
};

int main()
{
    complex a,b,c,d,e,f;
    cout<<"\nnhap so phuc thu nhat: "<<endl;
    a.inputsophuc();
    cout<<"\nnhap so phuc thu 2: "<<endl;
    b.inputsophuc();
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    cout<<"\nTong hai so phuc la: ";
    c.display();
    cout<<"\nHieu hai so phuc la: ";
    d.display();
    cout<<"\nTich hai so phuc la: ";
    e.display();
    cout<<"\nThuong hai so phuc la: ";
    f.display();
    return 0;
    getch();
}

