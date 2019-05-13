#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
#define max 100
using namespace std;
class Matrix
{
    int m,n,p;
	float A[max][max], B[max][max], C[max][max], D[max][max], E[max][max];
public:
    void InputMatrix(float A[max][max],int m,int n,char Symbol)
{
	for (int i=0;i<m;++i)
	{
		for (int j=0;j<n;++j)
		{
			cout<<Symbol<<"["<<i<<"]["<<j<<"] = ";
			cin>>A[i][j];
		}
	}
}
    void DisplayMatrix(float A[max][max],int m,int n)
{
	for (int i=0;i<m;++i)
	{
		for (int j=0;j<n;++j)
		{
			cout<<setw(7)<<A[i][j];
		}
		cout<<endl;
	}
}
    void AddMatrix(float A[max][max],float B[max][max],float C[max][max],int m,int n)
{
	for(int i=0;i<m;++i)
	{
		for (int j=0;j<n;++j)
		{
			C[i][j]=A[i][j] + B[i][j];
		}
	}
}
    void SubMatrix(float A[max][max],float B[max][max],float E[max][max],int m,int n)
{
	for(int i=0;i<m;++i)
	{
		for (int j=0;j<n;++j)
		{
			E[i][j]=A[i][j] - B[i][j];
		}
	}
}
    void MuilMatrix(float A[max][max],float B[max][max],float D[max][max],int m,int n,int p)
 {
	for (int i=0; i<m; i++)
    {
      for (int j=0; j<p; j++)
        {
        D[i][j]=0;
        for (int d=0; d<n; d++)
            D[i][j] += A[i][d] * B[d][j];
        }
        for (int i=0; i<m; i++)
        {
           for (int j=0; j<p; j++)
            {
                cout<<D[i][j]<<" ";
            }
          cout<<endl;
        }
    }
}
};
int main()
{
    Matrix a;
    int m,n,p;
	float A[max][max], B[max][max], C[max][max], D[max][max],E[max][max];
	cout << "\t\t*******************************************\n";
	cout << "\t\t**       Ho ten: bui van Cong            **\n";
	cout << "\t\t**       lop AT13CLC01                   **\n";
	cout << "\t\t**          helo everyone                **\n";
	cout << "\t\t**       I come from Ninh Binh           **\n";
	cout << "\t\t*******************************************\n";
	//cout<<"\n\t\tHo ten: bui van Cong\t\t Lop: AT13CLC01"<<endl;
	cout<<"\n\n\t\tCHUONG TRINH NHAN VA CONG HAI MA TRAN CAP M*N "<<endl;
	cout<<"nhap so hang: ";
	cin>>m;
	cout<<"nhap so cot: ";
	cin>>n;
	cout<<"\nnhap ma tran A cap "<<m<<"*"<<n<<endl;
	a.InputMatrix(A,m,n,'A');
	cout<<"\n\nnhap ma tran B cap "<<m<<"*"<<n<<endl;
	a.InputMatrix(B,m,n,'B');
	//hien thi cac ma tran ;
	cout<<"\nMa tran A: "<<endl;
	a.DisplayMatrix(A,m,n);
	cout<<"\nMa tran B: "<<endl;
	a.DisplayMatrix(B,m,n);
	cout<<"\nTong hai Ma tran A + B :"<<endl;
	a.AddMatrix(A,B,C,m,n);
	a.DisplayMatrix(C,m,n);
	cout<<"\nHieu hai Ma tran A - B :"<<endl;
	a.SubMatrix(A,B,E,m,n);
	a.DisplayMatrix(E,m,n);
	cout<<"Tich cua hai ma tran A * B :"<<endl;
	a.MuilMatrix(A,B,D,m,n,p);
	a.DisplayMatrix(D,m,n);
	getch();
	return 0;
}
