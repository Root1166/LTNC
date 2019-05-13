#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;
void nhap()
{

}
void tang()
{


}
void giam()
{


}
int main ()
{
    char tl;
    do
    {
        system("ls")
        cout<<"\t\t\tChuong trinh nhap day so\n\n"<<endl;
        cout<<"\t\tphim 1: nhap day so "<<endl;
        cout<<"\t\tphim 2: day so tang dan"<<endl;
        cout<<"\t\tphim 3: day giam dan"<<endl;
        cout<<"\t\tphim 4: thoat"<<endl;
        cout<<"\t\tchon: ";
        fflush(stdin);
        tl = getchar();
        switch(tl){
            case '1':nhap(); break;
            case '2':tang(); break;
            case '3':giam(); break;
            case '4':printf("cam on quy khach da su dung chuong trinh\n"); //getch();  break;
            default: printf("quy khach chon sai phim.Xin moi chon lai\n");
                   //getch();
                  // break;
        }
    }while(tl != '4');
}
