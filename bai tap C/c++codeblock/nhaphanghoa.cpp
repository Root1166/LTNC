#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{
float a[20][20], smax;
int m,n,i,j, imax, jmax;
//clrscr();
cout << " Cho biet so hang va so cot cua ma tran: " ;
cin >> m >> n ;
for (i=1;i<=m;++i)
for (j=1;j<=n;++j)
{
cout << "a[" << i << "," << j << "]= " ;
cin >> a[i][j] ;
}
smax = a[1][1]; imax=1; jmax=1;
for (i=1;i<=m;++i)
for (j=1;j<=n;++j)
if (smax<a[i][j])///Lập Trình Hướng Đối Tượng Với C++
//GS: Phạm Văn Ất 15 tenshi3003@gmail.com
{
smax = a[i][j];
imax=i ; jmax = j;
}
cout << "\n\n Ma tran" ;
//cout << setiosflags(ios::showpoint) << setprecision(1) ;
for (i=1;i<=m;++i)
for (j=1;j<=n;++j)
{
if (j==1) cout << '\n' ;
cout << setw(6) << a[i][j];
}
cout << "\n\n" << "Phan tu max:" << '\n' ;
cout << "co gia tri = " << setw(6) << smax;
cout << "\nTai hang " << imax << " cot " << jmax ;
getch();
}
