#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <graphics.h>
#include <stdlib.h>
using namespace std;
class vector
{
private:
    int x,y;
public:
    void input()
    {
        cout<<"\nInput the value of X = ";
        cin>>x;
        cout<<"\nInput the value of Y = ";
        cin>>y;
        cout<<endl;
    }
    void desplay()
    {
        cout<<"("<<x<<","<<y<<")";
        cout<<endl;
    }
    void AddVector(vector a,vector b)//tong hai vec tor
    {
        vector c;
        c.x = a.x + b.x;
        c.y = a.y + b.y;
        c.desplay();
    }
    void SubVector(vector a,vector b)
    {
        vector d;
        d.x = a.x - b.x;
        d.y = a.y - b.y;
        d.desplay();
    }
    void MuilVector(vector a,vector b)
    {
        vector e;
        e.x=a.x*b.x + a.x*b.y;
        e.y=a.y*b.x + a.y*b.y;
        e.desplay();
    }
};
int main()
{
    vector a,b,c;
    system("cls");
    cout<<"\nnhap vector thu 1\n";
    a.input();
    cout<<"\nnhap vector thu 2:\n";
    b.input();
    system("cls");
    cout<<"\nTong hai vector : ";
    c.AddVector(a,b);
    cout<<"\nHieu ha vector: ";
    c.SubVector(a,b);
    cout<<"\nTich vo huong hai vector: ";
    c.MuilVector(a,b);
//    getch();
    cout<<"\n\n";
    system("pause");
    return 0;
}
