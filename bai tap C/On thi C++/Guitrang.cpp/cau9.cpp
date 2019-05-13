#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include <cmath>
#include <fstream>
using namespace std;
class MT
{
private:
    double a[20][20];
    int n,m;
public:
    friend fstream& operator<<(fstream& os,const MT &x);
    friend fstream& operator>>(fstream& is,MT &x);
    friend MT operator*(const MT &x1,const MT &x2);
};
fstream& operator<<(fstream& os,const MT &x)
{
    os << setprecision(2) << setiosflags(ios::showpoint);
    os <<x.n<<"  "<<x.m<<endl;
    for(int i=1;i<=x.n;++i)
    {
      for(int j =1;j<=x.m;++j)
        os<<setw(6) <<x.a[i][j];
        os<<" \n";
    }
    return os;
}
fstream& operator>>(fstream& is, MT &x)
{
    char ten[50];
    is.get(ten,50);
    is>>x.n>>x.m;
    int i,j;
    for(i=1;i<=x.n;++i)
        for(j=1;j<=x.m;++j)
          {
                is>>x.a[i][j];
                cout<<x.a[i][j];
          }
    is.ignore();
    return is;
}
MT operator*(const MT &x1,const MT & x2)
{
    if(x1.m!=x2.n)
    {
        cout<<"\nkhong thu hien duoc vi khong cung bac"<<endl;
        return x1;
    }
    else
    {
        MT x;
        int n,m,i,j,k,p;
        n = x.n * x1.n;
        p=x1.n;
        m = x.m * x2.m;
        for(int i=1;i<=n;++i)
            for(j=1;j<=m;++j)
        {
            x.a[i][j]=0;
            for(k=1;k<=p;++k)
            x.a[i][j] += x1.a[i][k] * x2.a[k][j];
        }
        return x;
    }
}

int main()
{
    cout<<"\n\t\t\tChuong trinh phan lop ma tran in trong tep"<<endl;
    cout<<"\n\t\t\tHo ten : Bui van Cong \t\t\tLop:AT13CLC01"<<endl;
    MT a,b;
    fstream f("Tich_2MT.cpp",ios::in|ios::out);
    f>>a>>b;
    f.seekg(0,ios::end);
    cout<<"\nTich hai MT A * B: ";
    f<<a * b;
    f.close();
    }
