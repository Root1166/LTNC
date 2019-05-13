#include <iostream>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
	cout << "\t\t\t***************************\n";
	cout << "\t\t\t**      helo everyone    **\n";
	cout << "\t\t\t**      My name cong     **\n";
	cout << "\t\t\t** I come from Ninh Binh **\n";
	cout << "\t\t\t***************************\n";
	int n,i,j,tem;
	cout<<"nhap ptu mag: ";
	cin>>n;
	int *P=new int [n];
	if(P== NULL){
		cout<<"khong du bo nho de cap phat \n";
		return 1;
	}
	//srand((unsigned)time(NULL));
	//for(i=0;i<=n;i++)
	//P[i]=rand()%100;
	system("cls");
	for(i=1;i<=n;i++)
	{		
		cout<<"\nnhap phan tu thu" <<i<<": ";
		cin>>P[i];
	}
	system("cls");
	cout <<"\nphan tu chua xap xep la \n";
	for(i=1;i<=n;i++)
		cout<<P[i]<<"\t";
	for(i=1;i<=n-1;i++)
		for(j=i+1;j<=n;j++)
			if(P[i]>P[j])
			{
				tem=P[i];
				P[i]=P[j];
				P[j]=tem;
			}
	cout<<"\ndanh sach xap xep la : \n";
	for(i=1;i<=n;i++)
		cout<<P[i]<<"\t";
		cout<<"\n";
		delete []P;
	getch();
	
}