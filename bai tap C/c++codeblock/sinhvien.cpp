#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <windows.h>
using namespace std;
class DIEM
{
private:
    int x,y,m;
public:
    void input();
    void an()
    {
        putpixel(x,y,getbkcolor());
    }
    void display();
};
void DIEM::input()
{
    cout<<"nhap x = "; cin>>x;
    cout<<"nhap y = "; cin>>y;
    cout<<"nhap ma mau: ";
    cin>>m;
}

void DIEM::display()
{
    int mau_ht;
    system("color 3");
    //mau_ht = getcolor();
    putpixel(x,y,m);
    //setcolor(mau_ht);
}

void kd_do_hoa()
{
    int mh,mode;
    mh = mode = 0;
    initgraph(&mh,&mode," ");
}
int main()
{
    DIEM *p;
    int i,n;
    cout<<"So diem: ";
    cin>>n;
    p= new DIEM[n+1];
    for(i=1;i<=n;++i)
        p[i].input();
    kd_do_hoa();
    for(i=1;i<=n;++i)
        p[i].display();
    getch();
    for(i=1;i<=n;++i)
        p[i].an();
    getch();
    closegraph();
}
