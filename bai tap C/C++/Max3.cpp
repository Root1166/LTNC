#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
void found(int a,int b,int c)
{
	int max;
	max=a;
	if(max<b) max=b; //so sanh voi a 
	if(max<c) max=c; //ss b voi c
	cout<<"Big value in three number you entered from keyboard are: "<<max<<endl;
}
int main()
{
	int a,b,c;
	cout<<"Invite you input three number from keyboard"<< endl;
	cout<<"number 1: ";
	cin>>a;
	cout<<"number 2: ";
	cin>>b;
	cout<<"number 3: ";
	cin>>c;
	found(a,b,c);
	getch();
	return 0;
}
