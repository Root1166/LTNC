#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
struct DT
{
double a[20]; // Mang chua cac he so da thuc a0, a1,...
int n ; // Bac da thuc
} ;
ostream& operator<< (ostream& os, DT d);
istream& operator>> (istream& is,DT &d);
DT operator-(const DT& d);
DT operator+(DT d1, DT d2);
DT operator-(DT d1, DT d2);
DT operator*(DT d1, DT d2);
double operator^(DT d, double x); // Tinh gia tri da thucLập Trình Hướng Đối Tượng Với C++
//GS: Phạm Văn Ất 53 tenshi3003@gmail.com
ostream& operator<< (ostream& os, DT d)
{
os << " - Cac he so (tu ao): " ;
for (int i=0 ; i<= d.n ; ++i)
os << d.a[i] <<" x " ;
return os;
}
istream& operator>> (istream& is, DT &d)
{
cout << " - Bac da thuc: " ;
cin >> d.n;
cout << "Nhap cac he so da thuc:\n" ;
for (int i=0 ; i<= d.n ; ++i)
{
cout << "He so bac " << i << " = " ;
is >> d.a[i] ;
}
return is;
}
DT operator-(const DT& d)
{
DT p;
p.n = d.n;
for (int i=0 ; i<=d.n ; ++i)
p.a[i] = -d.a[i];
return p;
}
DT operator+(DT d1, DT d2)
{
DT d;
int k,i;
k = d1.n > d2.n ? d1.n : d2.n ;
for (i=0; i<=k ; ++i)
if (i<=d1.n && i<=d2.n)
d.a[i] = d1.a[i] + d2.a[i];
else if (i<=d1.n)
d.a[i] = d1.a[i];
else
d.a[i] = d2.a[i];
i=k;
while (i>0 && d.a[i]==0.0) --i;
d.n = i;
return d ;//Lập Trình Hướng Đối Tượng Với C++
//GS: Phạm Văn Ất 54 tenshi3003@gmail.com
}
DT operator-(DT d1, DT d2)
{
return (d1 + (-d2));
}
DT operator*(DT d1, DT d2)
{
DT d;
int k, i, j;
k = d.n = d1.n + d2.n ;
for (i=0; i<=k; ++i) d.a[i] = 0;
for (i=0 ; i<= d1.n ; ++i)
for (j=0 ; j<= d2.n ; ++j)
d.a[i+j] += d1.a[i]*d2.a[j] ;
return d;
}
double operator^(DT d, double x)
{
double s=0.0 , t=1.0;
for (int i=0 ; i<= d.n ; ++i)
{
s += d.a[i]*t;
t *= x;
}
return s;
}
int main()
{
DT p,q,r,s,f;
double x,g;
//clrscr();
cout <<"\nNhap da thuc P " ; cin >> p;
cout <<"\nNhap da thuc Q " ; cin >> q;
cout <<"\nNhap da thuc R " ; cin >> r;
cout <<"\nNhap da thuc S " ; cin >> s;
cout << "\nNhap so thuc x: " ; cin >> x;
f = -(p+q)*(r-s);
g = f^x;
cout << "\nDa thuc f " << f ;
//Lập Trình Hướng Đối Tượng Với C++
//GS: Phạm Văn Ất 55 tenshi3003@gmail.com
cout << "\n x = " << x;
cout << "\nf(x) = " << g;
getch();
}
