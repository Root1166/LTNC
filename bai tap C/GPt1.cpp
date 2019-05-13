#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void daochuoi(char chuoi[100])
{
cout<<"\n";
int n=strlen(chuoi);
for(int i=n-1;i>=0;i--)
{
cout<<chuoi[i];
}
}
int main()
{
char chuoi[100];
cout<<"NHAP CHUOI:";
cin.getline(chuoi,100);
daochuoi(chuoi);
return 0;
}