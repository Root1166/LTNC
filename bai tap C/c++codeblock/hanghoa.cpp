#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>
#define MAX 100
using namespace std;
class hanghoa
{
private:
    int MaHH;
    string TenHH;
    int Soluong;
    int Dongia;
    int Thanhtien;
    int Tongtien;
public:
    void nhap();
    void xuat();
    void xuatTongtien();
    int getMaHH();
    void setDongia(int dongia);
    void setSoluong(int soluong);
    void setTenHH(string ten);
};
void hanghoa::nhap()
{
    cout<<"\nNhap Mahh: ";
    cin>>MaHH;
    cout<<"\nTen SP: ";
    fflush(stdin);
    getline(cin,TenHH);
    cout<<"\nDon Gia: ";
    cin>>Dongia;
    cout<<"\nSo Luong: ";
    cin>>Soluong;
}
void hanghoa::xuat()
{
    Thanhtien = Dongia * Soluong;
    cout<<setiosflags(ios::left)<<setw(10)<<MaHH<<setw(20)<<TenHH<<setw(15)<<Dongia<<setw(15)<<Soluong<<setw(15)<<Thanhtien<<endl;
    }
void hanghoa::xuatTongtien()
{
    Tongtien+=Thanhtien;
     cout<<setiosflags(ios::left)<<setw(70)<<Tongtien<<endl;
}
int hanghoa::getMaHH()
{
    return MaHH;
}
void hanghoa::setDongia(int dongia)
{
    Dongia=dongia;
}
void hanghoa::setSoluong(int soluong)
{
    Soluong = soluong;
}
void hanghoa::setTenHH(string ten)
{
    TenHH = ten;
}
int TimKiem(hanghoa Arr[],int n,int mahh)
{
    for(int i=0;i<n;i++)
    {
        if(Arr[i].getMaHH() == mahh)
            return i;
    }
    return -1;
}
void MENU()
{
    hanghoa Arr[MAX];
    int x,index=0,n,i;
    do{
        system("cls");
        cout<<"\n\t\t================MENU======================"<<endl;
        cout<<"\t\t\t1.Nhap thong tin hang hoa moi"<<endl;
        cout<<"\t\t\t2.Danh sach cac loai mat hang"<<endl;
        cout<<"\t\t\t3.Sua thong tin hang hoa"<<endl;
        cout<<"\t\t\t4.Thoat "<<endl;
        cout<<"\t\t=>chon ";
        cin>>x;
        switch(x)
        {
        case 1:
            {
                system("cls");
                cout<<"\nMoi ban nhap so san pham can nhap: ";
                cin>>n;
                int dem=0;
                for(int i=index;i<n+index;i++)
                {
                     cout<<"\nMoi ban nhap thong tin cua san pah thu "<<i+1<<endl;
                     Arr[i].nhap();
                     dem++;
                }
                index+=dem;
                cout<<"\nDa Nhap Xong"<<endl;
                system("pause");
            }
            break;
        case 2:
            {
                system("cls");
                cout<<"\n\t\t\tDanh sach cac loai mat hang"<<endl;
                cout<<setiosflags(ios::left)<<setw(10)<<"MaHH"<<setw(20)<<"TenHH"<<setw(15)<<"Dongia"<<setw(15)<<"Soluong"<<setw(15)<<"ThanhTien"<<endl;
                for(int i=0;i<index;i++)
                {
                    Arr[i].xuat();
                }
                cout<<setiosflags(ios::right)<<setw(60)<<"Tongtien:"<<endl;
                //Arr[].xuatTongtien();
                system("pause");
            }
            break;
        case 3:
            {
                int tl,k;
                do{
                    int mahh;
                    cout<<"\nMoi ban nhap vao ma so cua san pham can sua: \n";
					cin>>mahh;
					int vt=TimKiem(Arr,index,mahh);
					if(vt!=-1)
					{
					    system("cls");
					    cout<<"\n\tBan Nhap chinh xac!"<<endl;
					    cout<<"\nHang hoa co ma so "<<mahh<<endl;
					    cout<<setiosflags(ios::left)<<setw(10)<<"Ma HH"<<setw(20)<<"Ten HH"<<setw(15)<<"DonGia"<<setw(15)<<"Soluong"<<setw(15)<<"Thanhtien"<<endl;
					    Arr[vt].xuat();
					    do{
                            cout<<"\n\n\t\t=================Sua Thong Tin San pham===================";
                            cout<<"\n\t\t1.Sua Ten Hang hoa.";
                            cout<<"\n\t\t2.Sua Don gia.";
                            cout<<"\n\t\t3.Sua So luonng.";
                            cout<<"\n\t\t4.Quay Lai!";
                            cout<<"\n\t\t=> ";
                            cin>>tl;
                            switch(tl)
                            {
                            case 1:
                                {
                                    system("cls");
                                    string ten;
                                    cout<<"\nMoi ban nhap ten moi cua hang hoa: "<<endl;
                                    cout<<"Ten Sp moi: ";
                                    fflush(stdin);
                                    getline(cin,ten);
                                    Arr[vt].setTenHH(ten);
                                    system("pause");
                                }
                                break;
                            case 2:
                                {
                                    system("cls");
                                    int dongia;
                                    cout<<"\nMoi ban nhap don gia moi cua mat hang: "<<endl;
                                    cout<<"\nDon Gia moi: ";
                                    cin>>dongia;
                                    Arr[vt].setDongia(dongia);
                                    system("pause");
                                }
                                break;
                            case 3:
                                {
                                    system("cls");
                                    int soluong;
                                    cout<<"\nMoi ban nhap so luong moi cua mat hang: "<<endl;
                                    cout<<"\nSo luong moi: ";
                                    cin>>soluong;
                                    Arr[vt].setSoluong(soluong);
                                    system("pause");
                                }
                                break;
                           // default:
                                break;
                            }
                        }while(tl!=4);
                        k=1;
					}
					else
                    {
                        cout<<"\nMa mat hang khong hop le\tXin moi quy khach nhap lai"<<endl;
                        k=2;
                    }
                }while(k!=1);
            }
            break;
		default:
            break;
        }
    }while(x!=4);
}

int main()
{
    MENU();
    system("pause");
    return 0;
}
