#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>
using namespace std;
class a
{
    int i,n;
    float s;
public:
    void nhap()
    {
        cout<<"nhap n = ";
        cin>>n;
    }
    float tong()
    {
        s=0;
        for(i=0;i<=n;++i)
            s+=i;
        return s;
    }
    void hienthi()
    {
        cout<<"\nTong S = "<<s;
    }
};
int main()
{
    a th;
    th.nhap();
    th.tong();
    th.hienthi();
}
