#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
class data
{
private:
    float x;
public:
    void input()
    {
        cout<<"nhap so : "; cin>>x;

    }
    friend data operator+(data a,data b)
    {
        data c;
        c.x = a.x + b.x;
        return c;
    }
    friend data operator-(data a,data b)
    {
         data c;
        c.x = a.x - b.x;
        return c;

    }
    friend data operator*(data a,data b)
    {
        data c;
        c.x = a.x * b.x;
        return c;

    }
    friend data operator/(data a,data b)
    {
         data c;
        c.x = a.x / b.x;
        return c;
    }
    void display()
    {
        cout<<x;
    }
};
int main()
{
    data a,b,c,d,f,e;
    cout<<"\n\t\tHo ten : Bui van Cong \t\t\tLop:AT13CLC01"<<endl;
    cout<<"so A "<<endl;
    a.input();
    cout<<"So B "<<endl;
    b.input();
    c = a + b; d = a - b; f = a * b; e = a / b;
    cout<<"\n\t\t\tCac Phep tinh"<<endl;
    cout<<"Tong = ";
    c.display();
    cout<<"\nHieu = ";
    d.display();
    cout<<"\nTich = ";
    f.display();
    cout<<"\nThuong = ";
    e.display();
    getch();
}
