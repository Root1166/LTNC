#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
struct TS
{
	char ht[20];
	float td;
	long sobd;
};
int main(void)
{
	TS *ts;
	int n,i,j;
	cout << "\n nhap so sinh vien: ";
	cin >> n;
	ts = new TS[n+1];
	if (ts==NULL)
	{
		cout << "\n loi cap phat bo nho ";
		getch();
	}
	for (i=1;i<=n;i++)
	{
		cout <<"\n thi sinh thu " <<i;
		cout << "\n HO ten: ";
		cin.ignore(1);
		cin.get(ts[i].ht,20);
		cout << "so bao danh : ";
		cin >>ts[i].sobd;
		cout <<"Tong Diem: ";
		cin >> ts[i].td;
	}
	for (i=1;i<=n-1;i++)
	for (j=i+1;j<n;j++)
	if(ts[i].td <ts[j].td )
	{
		TS tg=ts[i];
		ts[i]=ts[j];
		ts[j]=tg;
		
	}
	 //cout << setiosflags(ios::showpoint) << setprecision(1);
    for (i=1;i<=n;i++)
       //i cout << "\n" << setw() <<ts[i].ht <<
       // setw() << ts[i].sobd <<setw(6)<< ts[i].td;
		delele ts;
		getch(); 
}

