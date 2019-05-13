#include <iostream>

using namespace std;
int box(int lenght = 1,int width = 1, int height = 1);
int main()
{
    cout<<"The tich hinh hop mac dinh la "<<box()<<endl<<endl;
    cout<<"The tich cua hinh hop co chieu dai =  10, rong = 1 , cao = 1 la "<<box(10,5,5)<<endl;
}
int box(int lenght,int width,int height)
{
    return lenght * width * height;
}
