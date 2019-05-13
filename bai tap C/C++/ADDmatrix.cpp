#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<iomanip>
//#include<graphics>
using namespace std;
void AddMatrix(int *A,int *B,int *C,int M,int N)
{
	for(int i=0;i<M*N;++i)
	C[i] = A[i] + B[i];
}
void MulMatric(int *A,int *B,int *D,int M,int N)
{
	int j;
	for(int i=0;i<M*N;++i)
		D[i]= A[i] * B[i];
	
}
int AllocMatrix(int **A,int M,int N)
{
	*A = new int [M*N];
	if (*A == NULL)
	{
		return 0;
	}
	return 1;
}
void freeMatrix(int *A)
{
	if(A!=NULL)
		delete [] A;
	
}

void InputMatrix(int *A,int M,int N,char Symbol)
{
	for(int i=0;i<M;++i)
	{
		for(int j=0;j<N;++j)
		{
			cout<<Symbol<<"["<<i<<"]["<<j<<"]=";
			cin>>A[i*N+j];
		}
	}
}
void DisplayMatrix(int *A,int M,int N)
{
	for(int i=0;i<M;++i)
	{
		for(int j=0;j<N;++j)
		{
			cout<<setw(6)<<A[i*N+j]; 
		}
	 cout<<endl; 
	}
}
int main()
{
	int M,N;
	int *A = NULL, *B = NULL, *C = NULL, *D = NULL;
	//clrscr();
	cout<<"\t\t\tCHUONG TRINH CONG HAI MA TRAN\n";
	system("cls");
	cout<<"nhap so dong: ";
	cin>>M;
	cout<<"nhap so cot: ";
	cin>>N;
	system("cls");
	//cap phat bo nho cho ca ma tran 
	// cap phat bo nho cho ma tran A 
	if (!AllocMatrix((&A),M,N)){ 
		//endl: Xuất ra kí tự xuống dòng (‘\n’)
		cout<<"Khong con du bo nho!"<<endl;
		return 1;
	}
	//cap phat bo nho cho ma tran  B 
	if (!AllocMatrix((&B),M,N)){
		cout<<"khong con du bo nho !"<<endl;
		freeMatrix(A); // giai phong bo nho A
		return 1;
	}
	if (!AllocMatrix((&C),M,N)){
		cout<<"khong con du bo nho !"<<endl;
		freeMatrix(A); // giai phong bo nho A
		freeMatrix(B); // giai phong bo nho B
		return 1;
	}
	if (!AllocMatrix((&D),M,N)){
		cout<<"khong con du bo nho !"<<endl;
		freeMatrix(A); // giai phong bo nho A
		freeMatrix(B); // giai phong bo nho B
		freeMatrix(C); // giai phong bo nho C
		return 1;
	}
	system("cls");
	cout<<"nhap phan tu ma tran 1"<<endl;
	InputMatrix(A,M,N,'A');
	cout<<"nhap phan tu ma tran 2"<<endl;
	InputMatrix(B,M,N,'B');
	system("cls");
	//hien thi hai ma tran vua nhap
	//clrscr();
	cout<<"\nMa tran A : "<<endl;
	DisplayMatrix(A,M,N);
	cout<<"\nMa tran B : "<<endl;
	DisplayMatrix(B,M,N);
	//cong hai ma tran A and B -> C
	//clrscr();
	cout<<"Tong hai ma tran la: "<<endl;
	AddMatrix(A,B,C,M,N);
	DisplayMatrix(C,M,N);
	cout<<"nhan hai ma tran la: "<<endl;
	MulMatric(A,B,D,M,N);
	DisplayMatrix(D,M,N);
	freeMatrix(A); // giai phong ma tran A
	freeMatrix(B); // giai phong Ma tran B
	freeMatrix(C); // giai phong Ma tran C
	freeMatrix(D); // giai phong Ma tran D
	return 0;
}
