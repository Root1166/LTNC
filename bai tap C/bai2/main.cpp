#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(){
	float q1,q2,q3;
	float diemgk,diemck,tongdiemkt,Tdiem;
	cout<< "\t\t\t***************************\n";
	cout<< "\t\t\t**      helo everyone    **\n";
	cout<< "\t\t\t**      My name cong     **\n";
	cout<< "\t\t\t** I come from Ninh Binh **\n";
	cout<< "\t\t\t***************************\n";
	cout<<"diem kt1:  ";
	cin>> q1;
	cout<<"diem kt2:  ";
	cin>> q2;
	cout<<"diem kt3:  ";
	cin>> q3;
	cout<<"======= Diem thi giua ky ========"<<endl;
	cout<<"enter : ";
	cin>>diemgk;
	cout<<"\n";
	cout<<"======= Diem thi cuoi ky ========"<<endl;
	cout<<"enter: ";
	cin>>diemck;
	cout<<"\n";
	tongdiemkt=q1+q2+q3;
	Tdiem=diemgk + diemck + tongdiemkt;
	cout<<"\n==============================================";
	cout<<"\ntong diem kiem tra: "<<right<<setw(5)<< tongdiemkt;
	cout<<"\ndiem thi giua ky: "<<right<<setw(5)<< diemgk;
	cout<<"\ndiem thi cuoi ky: "<<right<<setw(5)<<diemck;
	cout<<"\n==============================================";
	cout<<"\ntong diem : "<<right<<setw(5)<<Tdiem;
	
	
	return 0;
	
	
	
}