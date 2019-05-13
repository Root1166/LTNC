#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip.h>
using namespace std;
struct{
	char ht[25];
	float t, l, h, td;
};
TS *ts;
void cap_phat_BNho(int n)
{
	ts = new TS[n+1];
	if(ts==NULL){
		cout<<"loi cap phat bo nho\n";
		exit;
	}
	for(int i=1;i<=n;i++){
		TS &h=ts[i];
		cout<<"thi sinh thu: "<<i<<endl;
		cout<<"Ho ten: ";
		cin.ignore(1);
		cin.get(h.ht,25);
		cout<<"cac diem toan,ly,hoa: ";
		cin>>h.t>> h.l >> h.h;
		h.td=h.t + h.l + h.h;
	}
}
void BiDanh(int i, int n)
{
	if(i<1||i>n){
		cout<<"chi ao mang khong hop le: ";
		exit;
	}
	return ts[i];
}
int main()
{
	int n,i;
	cout <<"\nso thi sinh : ";
	cin >> n;
	cap_phat_BNho(n);
	while(1){
		
		cout<< "\n Can xem thi sinh thu may: ";
		cout<< " chon so tu 1 den " << n <<" bam sai ket thuc CT ";
		cin>>i;
		BiDanh(i,n);
		cout<<"\n HO ten: "<< h.ht;
		cout<<"Tong Diem: "<< h.td;	
	}
}

