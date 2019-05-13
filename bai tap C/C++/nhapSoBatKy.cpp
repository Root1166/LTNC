#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	int a;
	cout<<"enter into a number: ";
	cin>>a;
	if(a<=100)
	{
		cout<<"number: "<<a<<"\nThe number you just entered is less than 100";
	
	}
	else 
	{
		cout<<"number: "<<a<<"\nThe number you just entered is greater than 100 ";
	}
	getch();
	return 0;
	
}