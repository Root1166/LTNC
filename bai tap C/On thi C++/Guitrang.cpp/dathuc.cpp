#include "conio.h"
#include "stdio.h"
#include "iostream"
#define max 101
using namespace std;
/*Nhap da thuc*/
void Nhap(float A[], int n) {
   for(int i= 0; i<=n; i++) {
      cout<<"a"<<i<<" = ";
      cin>>A[i];
   }
}
/*Xuat da thuc*/
void Xuat(float A[],int n, char*s) {
   cout<<s<<" = "<<A[0];
   for(int i=1; i<=n; i++){
      if(A[i]>0)
         cout<<"+"<<A[i]<<"x^"<<i;
      if(A[i]<0)
         cout<<A[i]<<"x^"<<i;
   }
}
/*P(x)+Q(x)*/
void Cong(float A[],int n,float B[],int m,float C[],int &h){
   if(n>m){
      h=n;
      for(int i=0;i<=m;i++)
         C[i]=A[i]+B[i];
      for(int i=m+1;i<=n;i++)
         C[i]=A[i];
   }else {
      h=m;
      for(int i=0;i<=n;i++)
         C[i]=A[i]+B[i];
      for(int i=n+1;i<=m;i++)
         C[i]=B[i];
   }
}
/*Q(x)=P(x)*bx^m*/
void NhanDonThuc(float A[],int n,float c,int m, float B[], int &h){
   h = n+m;
   for(int i=0;i<m;i++)
      B[i] = 0;
   for(int i=m;i<=n+m;i++)
      B[i] = c*A[i-m];
}
/*H(x)=P(x)+Q(x)*/
void NhanDaThuc(float A[], int n, float B[], int m, float C[], int &h) {
   float temp[max];
   int k;
   NhanDonThuc(B,m,A[0],0,C,h);
   for(int i = 1; i<=n; i++) {
         NhanDonThuc(B,m,A[i],i,temp,k);
         Cong(C,h,temp,k,C,h);
   }
}

/*Chuong Trinh Chinh*/
int main(){
   float A[max],B[max],C[max],D[max];
   int n,m,h;
   cout<<"\nNhap vao bac cua da thuc P(x), n = ";
   cin>>n;
   Nhap(A,n);
   Xuat(A,n,"P(x)");
   cout<<"\nNhap vao bac cua da thuc Q(x), m = ";
   cin>>m;
   Nhap(B,m);
   Xuat(B,m,"Q(x)");
   cout<<"\nH(x) = P(x) + Q(x)\n";
   Cong(A,n,B,m,C,h);
   Xuat(C,h,"    ");
   cout<<"\nH(x) = P(x)*Q(x)\n";
   NhanDaThuc(A,n,B,m,D,h);
   Xuat(D,h,"    ");
   getch();
}
