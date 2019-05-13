#include <cstdlib>
#include <iostream>
using namespace std;
int main( int argc, char *agrv[])
{
	char name[20];
	int age;
	age =10;
	int x,y,z;
		cout << "\t\t\t***************************\n";
		cout << "\t\t\t**      helo everyone    **\n";
		cout << "\t\t\t**      My name cong     **\n";
		cout << "\t\t\t** I come from Ninh Binh **\n";
		cout << "\t\t\t***************************\n";
	//x=10;
	//y=20;
	//z=12.6;
		//cout <<"x="<<x<<"\t"<<"y="<<y<<"\t"<<"z="<<z; 
		//cout <<"x="<<x<<"\t"<<"y="<<y<<"\t"<<"z="<<z;
		//cout << "\n";
		cout << " \nName : ";
		cin  >> name;
		cout << "\nHello "<<name<<"!\tWellcome to us \n ";
		cout << "\n\nEnter number you like:\n";
		cin  >>x>>y>>z;
		cout << "\n\nthis is number you enter: ";
		cout <<"x="<<x<<"\t"<<"y="<<y<<"\t"<<"z="<<z;
		cout << "\n\nAdd x + y = " << x + y<<"\t\t"<<"sub z - x = "<<z-x<<"\t\t"<<"mul x * y * Z = "<<x*y*z;
		cout << "\n\n";	
		cout << "Trung binh cua x,y,z la: "<<(x+y+z)/3.0f<<"\n";
	getchar();
	return 0;
}
