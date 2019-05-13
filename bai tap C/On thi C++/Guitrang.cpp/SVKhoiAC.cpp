#include<iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
class HS
{
    protected:
    char ho_ten[20];
    char khoi;
    int sobd;
    float tong_diem;
    public:
    virtual void nhap()=0;
    virtual void in()=0;
    char getkhoi()
    {
        return khoi;
    }
};
class A:public HS
{
    float toan,ly,hoa;
public:
    void nhap()
    {
        khoi='A';
        cout<<"Ho va ten:";
        cin.get(ho_ten,20);
        cin.ignore();
        cout<<"Nhap so bao danh:";
        cin>>sobd;
        cout<<"Nhap diem toan, ly va hoa:";
        cin>>toan>>ly>>hoa;
        tong_diem=toan+ly+hoa;
        cin.ignore();
    }
    void in()
    {
       cout<<endl<<sobd<<setw(20)<<ho_ten<<setw(10)<<toan<<setw(10)<<ly<<setw(10)<<hoa<<endl;
    }
};
class C: public HS
{
    float van,su,dia;
public:
    void nhap()
    {
        khoi='C';
        cout<<"Ho va ten:";
        cin.get(ho_ten,20);
        cin.ignore();
        cout<<"Nhap so bao danh:";
        cin>>sobd;
        cout<<"Nhap diem van, su va dia:";
        cin>>van>>su>>dia;
        tong_diem=van+su+dia;
        cin.ignore();
    }
    void in()
    {
        cout<<endl<<sobd<<setw(5)<<ho_ten<<setw(10)<<van<<setw(10)<<su<<setw(10)<<dia<<endl;
    }
};
int main()
{
    int i=0,j=0,n,m;
    char tra_loi,ban;
    A a[50];
    C c[50];
    do
    {
    cout<<"Nhap khoi cua sinh vien:";
    cin.get(ban);
    cin.ignore();
    if(ban=='a'){
        a[i].nhap();
        i++;
    } else if(ban=='c'){
        c[j].nhap();
        j++;
    }
    n=i;
    m=j;
    cout<<"Ban co muon nhap nua khong:";
    cin.get(tra_loi);
    cin.ignore();
    }while((tra_loi!='k')&&(tra_loi!='K'));
    cout<<"\nCac thi sinh vua nhap:\n"<<endl;
    cout<<"\t\tSinh vien khoi A"<<endl;
    cout<<endl<<"STT"<<setw(10)<<"Hoten"<<setw(10)<<"Toan"<<setw(10)<<"Hoa"<<setw(10)<<"Ly"<<endl;
    for(i=0;i<n;i++)
    {
        a[i].in();

    }
    cout<<"\t\tSinh vien khoi c"<<endl;
    cout<<endl<<"STT"<<setw(10)<<"Hoten"<<setw(10)<<"Van"<<setw(10)<<"Su"<<setw(10)<<"Dia"<<endl;
    for(j=0;j<m;j++)
    {
        c[j].in();

    }
}
