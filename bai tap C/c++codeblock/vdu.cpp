#include <iostream>
#include <conio.h>
#include <iomanip>
#define Giothieu"Ban nhap x vaf y de biet x+y la: "
char hoi;
using namespace std;
struct Giaovien
{
    char hoten[50];
    float soluong;
    int namsinh;
    int namvaonganh;
    char cogiadinh;
public:
    void noiquy()
    {
        cout<<"\n\t\tGiao vien phai chap hanh tot noi quy sau:"<<endl;
        cout<<"\t\t1.Khong duoc nghi phep k co ly do"<<endl;
        cout<<"\t\t2.Phai xin phep truoc va goi lai giao an"<<endl;
    }
};
int main()
{
   Giaovien GVtoan,GVvan,quydinh;
   cout<<"\nNhap thong tin cua cac giao vien day toan va van:"<<endl;
   cout<<"\nThong tin ve giao vien toan: "<<endl;
   cout<<"\nHo ten: ";
   cin>>GVtoan.hoten;
   cout<<"\nNam sinh: ";
   cin>>GVtoan.namsinh;
   cout<<"\nNam vao nganh: ";
   cin>>GVtoan.namvaonganh;
   cout<<"Giao vien da co vo con chua y/n: ";
   cin>>hoi;
   if (hoi =='y')
   {
       GVtoan.cogiadinh= 'c';
   }
   else
   {
       GVtoan.cogiadinh= 'k';
   }
   cout<<"\nThong tin ve giao vien Van: "<<endl;
   cout<<"\nHo ten: ";
   cin>>GVvan.hoten;
   cout<<"\nNam sinh: ";
   cin>>GVvan.namsinh;
   cout<<"\nNam vao nganh: ";
   cin>>GVvan.namvaonganh;
   cout<<"Giao vien da co vo con chua y/n: ";
   cin>>hoi;
   if (hoi =='y')
   {
       GVvan.cogiadinh= 'c';
   }
   else
   {
       GVvan.cogiadinh= 'k';
   }
   cout<<"\t\t\tDanh sach giao vien:"<<endl;
   cout<<"==============================================="<<endl;
   cout<<"Giao vien toan:";
   cout<<"\nHo ten: "<<GVtoan.hoten;
   cout<<"\nNam sinh: "<<GVtoan.namsinh;
   cout<<"\nNam vao nganh: "<<GVtoan.namvaonganh;
   cout<<"\nCo gia dinh : "<<GVtoan.cogiadinh;
   cout<<"\n\n\n========================================="<<endl;
   cout<<"Giao vien Van:";
   cout<<"\nHo ten: "<<GVvan.hoten;
   cout<<"\nNam sinh: "<<GVvan.namsinh;
   cout<<"\nNam vao nganh: "<<GVvan.namvaonganh;
   cout<<"\nCo gia dinh : "<<GVvan.cogiadinh;
   cout<<"\n\n==========================================="<<endl;
   quydinh.noiquy();
    getch();
}

