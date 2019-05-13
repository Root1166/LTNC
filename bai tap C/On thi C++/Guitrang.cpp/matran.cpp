#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;
void AddMatrix(int *A,int *B,int *C,int M,int N);
int AllocMatrix(int **A,int M,int N);
void freeMatrix(int *A);
void InputMatric(int *A,int M,int N,char Symbol);
void DisplayMatrix(int *A,int M,int N);
int main ()
{
	int M,N;
	int *A= NULL, *B = NULL,*C = NULL;
	cout<<"\t\t\tCHUONG TRINH CONG HAI MA TRAN TUY Y\n";
	cout<<"nhap so hang: ";
	cin>>M;
	cout<<"nhap so cot: ";
	cin>>N;
	//cap phat bo nho
	if(!AllocMatrix((&A),M,N))
	{
		cout<<"khong du bo nho ";
		return 1;
	}
	if(!AllocMatrix((&B),M,N))
	{
		cout<<"khong du bo nho ";
		freeMatrix(A);
		return 1;
	}
	if(!AllocMatrix((&C),M,N))
	{
		cout<<"khong du bo nho ";
		freeMatrix(A); 			// giai phong bo nho;
		freeMatrix(B);
		return 1;
	}
	// nhap ma tran A va B;
	cout<<"nhap ma tran A:"<<endl;
	InputMatric(A,M,N,'A');
	cout<<"nhap ma tran B:"<<endl;
	InputMatric(B,M,N,'B');
	//in hai tran ui tinh tong 
	cout<<"MA tran A: "<<endl;
	DisplayMatrix(A,M,N);
	cout<<"Ma tran B: "<<endl;
	DisplayMatrix(B,M,N);
	cout<<"Tong hai Ma tran la: "<<endl;
	AddMatrix(A,B,C,M,N);
	DisplayMatrix(C,M,N);
	getch();
	return 0;
}

void AddMatrix(int *A,int *B,int *C,int M,int N)
{
	for(int i=0;i<M*N;++i)
		C[i] = A[i] + B[i];
}
int AllocMatrix(int **A,int M,int N)
{
	*A = new int (M*N);
	if(*A == NULL){
		return 0;
	}
	return 1;
}
void freeMatrix(int *A)
{
	if(A!= NULL)
		delete [] A;
	
}
void InputMatric(int *A,int M,int N,char Symbol)
{
	for(int i=0;i<M;++i){
		for(int j=0;j<N;++j){
			cout<<Symbol<<"["<<i<<"]["<<j<<"] = ";
			cin>>A[i*N+j];
		}
	}
}

void DisplayMatrix(int *A,int M,int N)
{
	for(int i=0;i<M;++i){
		for(int j=0;j<N;++j){
			cout<<setw(7)<<A[i*N+j];
			
		}	
		cout<<endl;
	}
}