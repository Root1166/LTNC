#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char chuoi[100];
    char *contro;
    contro = chuoi;
    cout<<"\nMoi ban nhap chuoi ky tu: ";
    cin>>chuoi;
    for(int i=1;i<= strlen(chuoi);i++)
    {
        cout<<"\nKy tu thu "<<i<<"la : "<<*contro++;
    }
    getch();
}
