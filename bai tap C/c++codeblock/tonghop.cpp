#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <graphics.h>
using namespace std;
class DIEM
{
    private:
        int x,y,m;
    public:
        void nhapsl();
       // void an()
      //  {
       //     putpixel(x,y,getbkcolor());
      //  }
        void hien();
};
void DIEM::nhapsl()
{
    cout<<"nhap hoanh do x = ";
    cin>>x;
    cout<<"nhap tung do y = ";
    cin>>y;
    cout<<"nhap ma mau cua diem: ";
    cin>>m;
}
void DIEM::hien()
{
    int mau_ht;
    mau_ht = getcolor();
   // putpixel(x,y,m);
    setcolor(mau_ht);
}
void kd_do_hoa()
{
    int mh,mode;
    mh=mode=0;
    initgraph(&mh , &mode,"");
}

int main()
{
    DIEM *p;
    int i,n;
    cout<<"so diem: ";
    cin>>n;
    p = new DIEM[n +1];
    for(i=1; i<=n; ++i)
        p[i].nhapsl();
    kd_do_hoa();
    for(i=1; i<=n; ++i)
        p[i].hien();
    getch();
    //for(i=1; i<=n; ++i)
    //    p[i].an();
    getch();
    closegraph();
}
