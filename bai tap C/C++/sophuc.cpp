#include <iostream>
#include <conio.h>
using namespace std;
class sophuc{
	  int a,b;
	public: 
	            void getvalue()
				{ 
				  cout<< "enter a,b: ";
				  cin>>a>>b;
				}
				sophuc operator +(sophuc i)
				{
					sophuc t;
					t.a=a+i.a;
					t.b=b+i.b;
					return(t);
				}
				sophuc operator -(sophuc i)
				{
					sophuc t;
					t=a-i.a;
					t.b=b-i.b;
					return(t);
				}
				void display()
				{
					cout<<a<<"+"<<b<<"i"<<"\n";
				}

};
int main()
{
	sophuc ia1,ib2,result,result1;

	ia1.getvalue();
	ib2.getvalue();
	
	result=ia1+ib2;
	result1=ia1-ib2;
	
	cout<< "enter :\n";
	ia1.display();
	ib2.display();
	
	cout<< "result:\n";
	result.display();
	result1.display();
	
	
	return (0);
	
}




