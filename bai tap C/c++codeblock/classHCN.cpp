#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <graphics.h>
#include <iomanip>
using namespace std;
class HINH_CN
{
    private:
    int d,r;
    public:
        void nhapsl()
        {
            cout<<"nhap chieu dai : ";
            cin>>d;
            cout<<"nhap chieu rong: ";
            cin>>r;
        }
        void ouput()
        {
            cout<<"\nchieu dai = "<<d;
            cout<<"\nchieu rong = "<<r;
        }
        int dien_tich()
        {
            return d*r;
        }
        int chu_vi()
        {
            return 2*(d+r);
        }
};
class Day_HINH_CN
{
    private:
    int n;
    HINH_CN *h;
    public:
        void nhapsl();
        HINH_CN hinh_dt_max();
        HINH_CN *hinh_cv_max();
};
void Day_HINH_CN::inputsl()
{
    cout<<"so hinh CN: ";
    cin>>n;
    h = new HINH_CN[n + 1];
    for(int i=1;i<=n;++i)
        h[i].nhapsl();
}
HINH_CN Day_HINH_CN::hinh_dt_max()
{
    HINH_CN hdtmax;
    hdtmax = h[1];
    for(int i=2;i<=n;++i)
    if(h[i].dien_tich()  > hdtmax.dien_tich())
        hdtmax = h[i];
    return hdtmax;
}
HINH_CN *Day_HINH_CN::hinh_cv_max()
{
    int imax = 1;
    for(int i = 2;i<=n;++i)
        if(h[i].chu_vi() > h[imax].chuvi())
        imax = i;
    return (h+imax);
}
int main()
{
    Day_HINH_CN d;
    HINH_CN hdtmax;
    d.inputsl();
    hdtmax = d.hinh_dt_max();
    hdtmax.ouput();
    HINH_CN *hcvmax=d.hinh_cv_max();
    hcvmax->ouput();
    getch();
}
