#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int tuoi;
void ege()
{
	if(tuoi>=16)
	{
		cout<<"\nthi sinh co tuoi la:  "<<tuoi<<endl;
		cout<<"\nDu tuoi la hoc sinh cap ba";
	}
	else
	{
		cout<<"\nthi sinh co tuoi la:  "<<tuoi<<endl;
		cout<<"\nKhong du tuoi la hoc sinh cap ba";
	}
}
int main()
{
	
	cout<<"enter ege: ";
	cin>>tuoi;
	ege();
	getch();
	return (0);
}