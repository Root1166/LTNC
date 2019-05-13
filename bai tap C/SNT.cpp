#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
void soNguyenTo(int soA,int i){
	if(soA<2){
		return(false);
	}
	else(soA>2){
		if(soA%2==0){
			return (false);
		}
		for(i=3;i<=sqrt((float)soA);i++){
			if(soA%i==0){
				return (false);
			}
		}
	}
	return (true);
}
int main(int argc, char ** argv)
{
	int n,i;
	cout<<" nhap so : ";
	cin>>n;
	if (soNguyenTo(n,i) == true){
		cout<<"So "<<n<<" la so nguyen to\n";
	}
	else{
		cout<<n<<" khong phai la so nguyen to\n";
		
	}
	return 0;
}