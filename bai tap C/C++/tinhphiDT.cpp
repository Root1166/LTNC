#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(){
	long int sophut,phi=0;
	int Tong=0;
	const int Pcd=25;
	cout<<"enter into number minutes: ";
	cin>>sophut;
	if(sophut>200){
		phi=(sophut-200)*200+150*400+50*600;
		
	}
	if(sophut>50){
		phi=(sophut-50)*400+50*600;
	}
	else
	phi=50*600;
	Tong=0.01*phi+Pcd;
	cout<<"The number minutes used is: "<<sophut<<endl;
	cout<<"The amount you pay is: "<<Tong<<endl;
	return 0;
}