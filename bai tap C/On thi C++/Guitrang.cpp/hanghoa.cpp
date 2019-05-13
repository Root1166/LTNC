#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
#include<stdio.h>
#define MAX 100
using namespace std;
class hanghoa
{
private:
		int MaHH;
		string TenHH;
		int Soluong;
		int Dongia;
		float Thanhtien;
public:
		void nhap();
		void xuat();
		int getMaHH();
		void setTenHH(string ten);
		void setSoluong(int soluong);
		void setDongia(int dongia);
		void getThanhtien(int thanhtien);
};
void hanghoa::nhap()
{
		cout<<"\nNhap Ma HH: ";
		cin>>MaHH;
		cout<<"\nNhap ten Hang Hoa : ";
		fflush(stdin);
		getline(cin,TenHH);
		cout<<"\nSo luong: ";
		cin>>Soluong;
		cout<<"\nGia HH: ";
		cin>>Dongia;
	
}
void hanghoa::xuat()
{
	cout<<setw(10)<<MaHH<<setw(20)<<TenHH<<setw(15)<<Dongia<<setw(15)<<Soluong<<setw(15)<<Thanhtien<<endl;
}
int hanghoa::getMaHH()
{
	return MaHH;
}
void hanghoa::setTenHH(string ten)
{
	TenHH = ten;
}
void hanghoa::setDongia(int dongia)
{
	Dongia = dongia;
}
void hanghoa::setSoluong(int soluong)
{
	Soluong = soluong;
}
void hanghoa::getThanhtien(int thanhtien)
{
	Thanhtien = thanhtien;
}
int TimKiem(hanghoa Arr[],int n,int mahh)//ham tim kiem ma hop le 
{
	for(int i=0;i<n;i++)
	{
		if(Arr[i].getMaHH()==mahh)
		{
			return i;
		}
	}
	return -1;
}
void MENU()
{
	hanghoa Arr[MAX];
	int x,index=0,n;
	do{
		system("cls");
		cout<<"\n\t\t==================MENU=================="<<endl;
		cout<<"\t\t\t1.Nhap thong tin hang hoa moi"<<endl;
		cout<<"\t\t\t2.Danh sach Hang Hoa"<<endl;
		cout<<"\t\t\t3.Sua hang hoa"<<endl;
		cout<<"\t\t\t4.thoat! "<<endl;
		cout<<"\t\t\t=>chon ";
		cin>>x;
		switch(x)
		{
			case 1:
			{
				system("cls");
				cout<<"\nMoi ban nhap so hang hoa can nhap: ";
				cin>>n;
				int dem=0;
				for(int i = index;i<n+index;i++)
				{
					cout<<"\nNhap thong tin cho san phan thu: "<<i+1<<endl;
					Arr[i].nhap();
					dem++;
				}
				index+=dem;
                cout<<"\nDa nhap xong"<<endl;
                system("pause");				
			}
			break;
			case 2:
			{
				system("cls");
				cout<<"\n\t\t\tDanh sach Cac loai Mat Hang"<<endl;
				cout<<setw(10)<<"Ma HH"<<setw(20)<<"Ten HH"<<setw(15)<<"DonGia"<<setw(15)<<"Soluong"<<setw(15)<<"Thanhtien"<<endl;
				for(int i=0;i<index;i++)
				{
					Arr[i].xuat();
				}
				system("pause");
			}
			break;
			case 3:
			{
				int tl,k;
				int mahh;
				system("cls");
				cout<<"\nXin moi ban nhap Ma so cua mat hang can sua";
				cin>>mahh;
				int vt=TimKiem(Arr,index,mahh);
				if (vt=-1)
				{
					system("cls");
					cout<<"\nNhap chinh xac";
					cout<<"Mat hang co ma so mat hang la: "<<mahh<<endl;
					cout<<setw(10)<<"Ma HH"<<setw(20)<<"Ten HH"<<setw(15)<<"DonGia"<<setw(15)<<"Soluong"<<setw(15)<<"Thanhtien"<<endl;
					Arr[vt].xuat();
					do{
						system("cls");
						cout<<"\n\t\t===============SuaHH=============="<<endl;
						cout<<"\t\t\t1.Sua Ten mat hang"<<endl;
						cout<<"\t\t\t2.Sua Don gia"<<endl;
						cout<<"\t\t\t3.Sua So luong"<<endl;
						cout<<"\t\t\t4.Tro ve"<<endl;
						cout<<"\t\t=>chon ";
						cin>>tl;
						switch(tl)
						{
							case 1:
							{
								system("cls");
								string ten;
								cout<<"\nXin moi ban nhap ten moi can sua: ";
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
								cout<<"\nXin moi ban nhap Don gia moi : ";
								cin>>dongia;
								Arr[vt].setDongia(dongia);
								system("pause");
							}
							break;
							case 3:
							{
								system("cls");
								int soluong;
								cout<<"\nXin moi ban nhap Don gia moi : ";
								cin>>soluong;
								Arr[vt].setSoluong(soluong);
								system("pause");
							}
							break;
						default:
							break;
						}
					}while(tl!=4);
					k=1;
				}
				else
				{
					cout<<"\nKhong co ma nhu quy khach da nhap\tXin Quy khach nhap lai"<<endl;
					k=2;
				}	
			}
		}
	}while(x!=4);
}
int main()
{
	MENU();
	system("pause");
	return 0;	
}