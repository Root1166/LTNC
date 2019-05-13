#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class point
{
private:
    int x, y;
public:
    void InputPoint()
    {
        cout<<"\nNhap toa do A (x,y) "<<endl;
        cout<<"\nInput the value of x = ";
        cin>>x;
        cout<<"\nInput the value of y = ";
        cin>>y;
    }
    void Tinhtien()
    {
        float data_x,data_y;
        cout<<"\nnhap toa do tinh tien x = ";
        cin>> data_x;
        cout<<"\nnhap toa do tinh tien y = ";
        cin>>data_y;
        cout<<"\n\nToa do moi: ("<<x+data_x<<","<<y+data_y<<") ";
    }
    void DisplayPoint()
    {
    cout<<"Toa Do:  ("<<x<<","<<y<<") "<<endl;
    }
    point operator-(point a)
    {
        a.x=-1*a.x;
        a.y=-1*a.y;
        return a;
    }
};
int main()
{
    point a,b;
    cout<<"\t\t\tChuong trinh nhap dien tinh tien diem\n";
    cout<<"\n\t\tHo ten: Bui Van Cong \t\t\tLop:AT13CLC01\n";
    a.InputPoint();
    a.DisplayPoint();
    a.Tinhtien();
    //diem doi xung;
    b=b-a;
    cout<<"\n\n\nDiem doi xung"<<endl;
    b.DisplayPoint();
}
