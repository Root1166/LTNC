#include <iostream>
#include <conio.h>
#include <iomanip>
#define max 100
using namespace std;
int d=0;
int n;
int x[max], a[max], b[max], c[max];
void start()
{
    cout<<"nhap n = "; cin>>n;
    for(int i=1;i<=n;i++) a[i] = 1;
    for(int i=2;i<=2*n;i++) b[i] = 1;
    for(int i=1-n;i<=n-1;i++) c[i] = 1;
}
void display()
{
    cout<<d+1<<": ";
    for(int i =1; i<=n;i++)
    {
        cout<<setw(3)<<"("<< i <<","<< x[i] <<")";
    }
    cout<<endl;
    d++;
}
void Try(int i)
{
    int j;
    for(j = 1; j <= n;j++)
    {
        if(a[j]&&b[i+j]&&c[i-j])
        {
            x[i] = j;
            if(i != n)
            {
                a[j] = b[i+j] = c[i-j] = 0;
                Try(i+1);
                a[j] = b[i+j] = c[i-j] = 1;
            }
            else
                display();
        }
    }
}
int main()
{
    start();
    Try(1);
    getch();
}
