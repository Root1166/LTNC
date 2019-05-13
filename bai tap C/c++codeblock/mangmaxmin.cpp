#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class Manglc
{
private:
    int a[100];
    int n,i,temp;
public:
    void input()
    {
        cout<<"\nnhap so phan tu n = "; cin>>n;
        for(i=1;i<=n;++i)
        {
            cout<<"a["<<i<<"] = ";
            cin>>a[i];
        }
    }
    void show()
    {
        cout<<"\nday so vua nhap la ";
        for(i=1;i<=n;++i)
            cout<<a[i]<<"  ";
    }
    void sapxep()
    {
        for(i=1;i<=n-1;++i)
            for(int j=i+1;j<=n;++j)
                if(a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] =temp;
                }
        cout<<"\nday so vua sap xep la ";
        for(i=1;i<=n;++i)
            cout<<a[i]<<"  ";
    }
    void max_min()
    {
        int max,min;
        max = a[1];
        for(i=1;i<=n;++i)
            if(max < a[i]) max = a[i];
            {
                cout<<"\nMaxinum value "<<max;
            }
        min = a[1];
        for(i =1;i<=n;++i)
            if(min > a[i]) min = a[i];
            {
                cout<<"\nMininum value "<<min;
            }
    }
};
int main()
{
    Manglc a;
    a.input();
    a.show();
    a.sapxep();
    a.max_min();
    getch();
}
