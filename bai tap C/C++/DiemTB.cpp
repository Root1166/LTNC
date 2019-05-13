#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	float TB;
	float x,y,z;
	cout<<"nhap 3 diem kt,gk,ck:\n";
	cin>>x>>y>>z;
	TB=(x+y+z)/3;
	if(TB>=9){
		cout<<"Hang A loai gioi";
	}
	else if((TB>=7)&(TB <=9))
	{
		cout<<"Hng B Loai kha";
	}
	else if((TB>=5)&(TB<=7))
	{
		cout<<"Hang C loai TB";
	}
	else {cout<<"truot";}
	getch();
	return 0;
}