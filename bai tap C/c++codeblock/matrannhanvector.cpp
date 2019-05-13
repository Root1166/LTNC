#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;
typedef int MT[20][20];
void nhapmt(MT a,char *ten, int m, int n);
void inmt(MT a,char *ten, int m, int n);
void nhanmt(MT a,MT b, MT c, int m, int n, int p);
void nhapmt(MT a,char *ten, int n);
void inmt(MT a,char *ten, int n);
void nhanmt(MT a,MT b, MT c, int n);
void nhapmt(MT a, char *ten, int m, int n)
{
for (int i=1;i<=m;++i)
for (int j=1;j<=n;++j)
{
cout << "\n" << ten <<"[" << i << "," << j << "]= " ;
cin >> a[i][j];
}
}
void nhapmt(MT a,char *ten, int n)
{
nhapmt(a,ten,n,n) ;
}
void inmt(MT a,char *ten, int m, int n)
{
cout << "\nMa tran: " << ten;
for (int i=1;i<=m;++i)
{
cout << "\n" ;
for (int j=1;j<=n;++j)
cout << setw(6) << a[i][j];
}
}
void inmt(MT a,char *ten, int n)//Lập Trình Hướng Đối Tượng Với C++
//GS: Phạm Văn Ất 45 tenshi3003@gmail.com
{
inmt(a,ten,n,n) ;
}
void nhanmt(MT a,MT b, MT c, int m, int n, int p)
{
for (int i=1;i<=m;++i)
for (int j=1;j<=p;++j)
{
c[i][j]=0;
for (int k=1;k<=n;++k)
c[i][j] += a[i][k] * b[k][j];
}
}
void nhanmt(MT a,MT b, MT c, int n)x
{
nhanmt(a,b,c,n,n, n) ;
}
int main()
{
MT a,b,c,d; // d= abc
MT u;
int m,n,k;
    cout<<"\t\t\tCHUONG TRINH CONG HAI MA TRAN\n";
//	system("cls");
    cout<<"\nhap MA tran vuong A va B"<<endl;
	cout<<"nhap so dong: ";
	cin>>m;
	//system("cls");
	cout<<"\nMA tran A: "<<endl;
	nhapmt(a,"A",m);
	cout<<"\nMa tran B: "<<endl;
	nhapmt(b,"B",m);
	//system("cls");
	cout<<"\nNhap Ma tran HCN C: "<<endl;
	cout<<"nhap so dong: ";
	cin>>k;
	cout<<"nhap so cot: ";
	cin>>n;
	//system("cls");
	nhapmt(a,"C",m,n);
    //nhanmt(a,b,u,m);
    //nhanmt(u,c,d,m,m,n);
    inmt(a,"A",m);
    inmt(b,"B",m);
    //inmt(u,"U = A*B",m);
    inmt(c,"C",n,k);
    //inmt(d,"D = U*C",m,n);
    getch();
}
