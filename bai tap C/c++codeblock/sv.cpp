#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
using namespace std;
class SinhVien//Khởi tạo class sinh vien
{
public:
	void Nhap();//Khai báo các phương thức
	void Xuat();
	int getMaSV();
	void setTenSV(string ten);
	void setDiemGiuaKy(float diemgiuaky);
	void setDiemCuoiKy(float diemcuoiky);
private://Các thuộc tính
	int MaSV;
	string TenSV;
	float DiemGiuaKy;
	float DiemCuoiKy;
};
void SinhVien::Nhap()//Định nghĩa phương thức
{
	cout<<"\nNhap Ma SV:";
	cin>>MaSV;
	cout<<"\nNhap Ten Sinh Vien:";
	fflush(stdin);
	getline(cin,TenSV);
	cout<<"\nNhap Diem Giua ky:";
	cin>>DiemGiuaKy;
	cout<<"\nNhap Diem cuoi ky.";
	cin>>DiemCuoiKy;
}
void SinhVien::Xuat()
{
	cout<<setiosflags(ios::left)<<setw(15)<<MaSV<<setw(20)<<TenSV<<setw(15)<<DiemGiuaKy<<setw(15)<<DiemCuoiKy<<endl;
}
int SinhVien::getMaSV()
{
	return MaSV;
}
void SinhVien::setDiemCuoiKy(float diemcuoiky)
{
	DiemCuoiKy=diemcuoiky;
}
void SinhVien::setDiemGiuaKy(float diemgiuaky)
{
	DiemGiuaKy=diemgiuaky;
}
void SinhVien::setTenSV(string ten)
{
	TenSV=ten;
}
int TimKiem(SinhVien Arr[],int n,int masv)//Hàm tìm kiếm ID hợp lệ
{
	for(int i=0;i<n;i++)
	{
		if(Arr[i].getMaSV()==masv)
		{
			return i;
		}
	}
	return -1;
}
void MENU()//MENU chương trình thêm sinh động
{
	SinhVien Arr[MAX];
	int x,index=0,n;
	do
	{
		system("cls");
		cout<<"\n\t====================MENU=====================";
		cout<<"\n\t\t1.Nhap vao sinh vien moi.";
		cout<<"\n\t\t2.In ra tat ca cac sinh vien.";
		cout<<"\n\t\t3.Sua thong tin sinh vien theo ma SV.";
		cout<<"\n\t\t4.Thoat!";
		cout<<"\n\t=>chon !";
		cin>>x;
		switch (x)
		{
		case 1:
			{
				system("cls");
				cout<<"\nMoi ban nhap vao so sinh vien can them.";
				cin>>n;
				int dem=0;
				for(int i=index;i<n+index;i++)
				{
					cout<<"\nMoi ban nhap vao thong tin cua sinh vien thu "<<i+1<<endl;
					Arr[i].Nhap();
					dem++;
				}
				index+=dem;
				cout<<"\nDa nhap xong!";
				system("pause");
			}
			break;
		case 2:
			{
				system("cls");
				cout<<"\n\t\tDanh Sach Sinh Vien.\n";
				cout<<setw(15)<<"Ma SV"<<setw(20)<<"Ten SV"<<setw(15)<<"Diem Giua Ky"<<setw(15)<<"Diem Cuoi Ky"<<endl;
				for(int i=0;i<index;i++)
				{
					Arr[i].Xuat();
				}
				system("pause");
			}
			break;
		case 3:
			{
				int t,k;
				do{
					cout<<"\nMoi ban nhap vao ID sinh vien can sua.\n";
					int masv;cin>>masv;
					int vt=TimKiem(Arr,index,masv);
					if(vt!=-1)
					{
						system("cls");
						cout<<"\nNhap chinh xac!\n";
						cout<<"\nSinh vien co ma so ID :"<<masv <<"\n";
						cout<<setw(15)<<"Ma SV"<<setw(20)<<"Ten SV"<<setw(15)<<"Diem Giua Ky"<<setw(15)<<"Diem Cuoi Ky"<<endl;
						Arr[vt].Xuat();
						do
						{
							cout<<"\n\n\t\t=================Sua Thong Tin Sinh Vien===================";
							cout<<"\n\t\t1.Sua Ten Sinh Vien.";
							cout<<"\n\t\t2.Sua Diem Giua Ky.";
							cout<<"\n\t\t3.Sua Diem Cuoi Ky.";
							cout<<"\n\t\t4.Quay Lai!";
							cout<<"\n\t\t=> !";
							cin>>t;
							switch (t)
							{
							case 1:
								{
									system("cls");
									string  name;
									cout<<"\nMoi ban nhap vao ten moi!";
									fflush(stdin);
									getline(cin,name);
									Arr[vt].setTenSV(name);
									cout<<"\nDa sua xong!";
									system("pause");
								}
								break;
							case 2:
								{
									system("cls");
									float diemgiuaky;
									cout<<"\nMoi ban nhap vao diem gia ky moi.";
									cin>>diemgiuaky;
									Arr[vt].setDiemGiuaKy(diemgiuaky);
									cout<<"\n.Da sua xong!";
									system("pause");
								}
								break;
							case 3:
								{
									system("cls");
									float diemcuoiky;
									cout<<"\nMoi ban nhap vao diem gia ky moi.";
									cin>>diemcuoiky;
									Arr[vt].setDiemCuoiKy(diemcuoiky);
									cout<<"\n.Da sua xong!";
									system("pause");
								}
								break;
							default:
								break;
							}
						}
						while(t!=4);
						k=1;
					}
					else
					{
						cout<<"\nID sinh vien khong hop le.\nVui long nhap lai!";
						k=2;
					}
				}
				while(k!=1);
			}
			break;
		default:
			break;
		}
	}
	while(x!=4);
}
int main()
{
	MENU();
	system("pause");
	return 0;
}
