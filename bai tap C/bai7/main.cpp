#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
void nhapds(double *a,int n){
    for(int i=1;i<=n;++i)
    {
        cout << "phan tu thu: " << i << " : ";
        cin >> a[i];
    }
}
void hv(double &x, double &y){
    double  tg =x; x=y; y=tg;
}
void sapxep(double *a,int n){
    for(int i=1;i<n-1;++i)
        for(int j=i+1;j<=n;++j)
        if(a[i]>a[j])
        hv(a[i],a[j]);
}
int main()
{
   double a[100];
   int i,n;
   cout << "\n N= ";
   cin >> n;
   nhapds(a,n);
   sapxep(a,n);
   for(i=1;i<=n;++i)
   printf("\n%0.1f",a[i]);
   getch();
}
