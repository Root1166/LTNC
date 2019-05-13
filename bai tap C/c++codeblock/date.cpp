#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class DATE
{
private:
    int day,month,year;
public:
    void input()
    {
        cout<<"Input the value of day: ";
        cin>>day;
        cout<<"Input the value of month: ";
        cin>>month;
        cout<<"Input the value of year: ";
        cin>>year;
    }
    void check()
    {
        switch(month)
        {
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
            cout<<"\nthang co 31 ngay\n"; break;
        case 4 : case 6 : case 9 : case 11:
            cout<<"\nThang co 30 ngay\n"; break;
        case 2:
            {
                if(year%4 ==0)
                {
                    cout<<"\nThang co 29 ngay\n";
                }
                else
                {
                    cout<<"\nThang co 28 ngay\n";
                }
            }
        }
    }
    void normalize()
    {
        if ((day<1)||(day>31))
            cout<<"Please input the value of day again!";
        if ((month<1)||(month>12))
            cout<<"\nPlease input the value of month again!";
        if (year<1)
            cout<<"\nPlease input the value of year again!";
    }
    int advance(int day, int month, int year)
    {
        //day=day+1;
        return day;
    }
    void desplay()
    {
        cout<<"Day: "<<advance(day,month,year);
        cout<<"\nMonth: "<<month;
        cout<<"\nYear: "<<year;
    }

};


int main()
{
    DATE a;
    a.input();
    a.check();
    a.normalize();
    a.desplay();
    return 0;
}
