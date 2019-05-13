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
	void NhapKA();
	void NhapKC();//Khai báo các phương thức
	void XuatKA();
	void XuatKC();
	int getMaSV();
	void setTenSV(string ten);
	void setDiemToan(float diemtoan);
	void setDiemLy(float diemly);
	void setDiemHoa(float diemhoa);
	void setDiemVan(float diemvan);
	void setDiemSu(float diemsu);
	void setDiemDia(float diemdia);
private://Các thuộc tính
	int MaSV;
	string TenSV;
	float TongDiem1;
	float TongDiem2;
	float DiemToan;
	float DiemLy;
	float DiemHoa;
	float DiemVan;
	float DiemSu;
	float DiemDia;
};
void SinhVien::NhapKA()//Định nghĩa phương thức
{
    cout<<"\nNhap thong tin sinh vien khoi A: "<<endl;
	cout<<"\nNhap Ma SV:";
	cin>>MaSV;
	cout<<"\nNhap Ten Sinh Vien:";
	fflush(stdin);
	getline(cin,TenSV);
	cout<<"\nNhap Diem Toan :";
	cin>>DiemToan;
	cout<<"\nNhap Diem Ly: ";
	cin>>DiemLy;
	cout<<"\nNhap Diem Hoa: ";
	cin>>DiemHoa;
}
void SinhVien::NhapKC()//Định nghĩa phương thức
{
    cout<<"\nNhap thong tin sinh vien khoi C: "<<endl;
	cout<<"\nNhap Ma SV:";
	cin>>MaSV;
	cout<<"\nNhap Ten Sinh Vien:";
	fflush(stdin);
	getline(cin,TenSV);
	cout<<"\nNhap Diem Van :";
	cin>>DiemVan;
	cout<<"\nNhap Diem Su: ";
	cin>>DiemSu;
	cout<<"\nNhap Diem Dia: ";
	cin>>DiemDia;
}
void SinhVien::XuatKA()
{
    TongDiem1=DiemToan + DiemLy + DiemHoa;
	cout<<setiosflags(ios::left)<<setw(15)<<MaSV<<setw(20)<<TenSV<<setw(15)<<DiemToan<<setw(15)<<DiemLy<<setw(15)<<DiemHoa<<TongDiem1<<endl;
}
	void SinhVien::XuatKC()
{
    TongDiem2=DiemVan + DiemSu + DiemDia;
	cout<<setiosflags(ios::left)<<setw(15)<<MaSV<<setw(20)<<TenSV<<setw(15)<<DiemVan<<setw(15)<<DiemSu<<setw(15)<<DiemDia<<TongDiem2<<endl;
}
int SinhVien::getMaSV()
{
	return MaSV;
}
void SinhVien::setDiemToan(float diemtoan)
{
	DiemToan=diemtoan;
}
void SinhVien::setDiemLy(float diemly)
{
	DiemLy=diemly;
}
void SinhVien::setDiemHoa(float diemhoa)
{
	DiemHoa=diemhoa;
}
void SinhVien::setDiemVan(float diemvan)
{
	DiemVan=diemvan;
}
void SinhVien::setDiemSu(float diemsu)
{
	DiemSu=diemsu;
}
void SinhVien::setDiemDia(float diemdia)
{
	DiemDia=diemdia;

}
void MENU()//MENU chương trình thêm sinh động
{
	SinhVien Arr[MAX];
	int x,index=0,n;
	do
	{
		system("cls");
		cout<<"\n\t====================MENU=====================";
		cout<<"\n\t\t1.Nhap vao sinh vien khoi A.";
		cout<<"\n\t\t2.nhap sinh vien khoi C";
		cout<<"\n\t\t3.In ra tat ca cac sinh vien khoi A va C.";
		cout<<"\n\t\t4.Sua thong tin sinh vien theo ma SV.";
		cout<<"\n\t\t5.Thoat!";
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
					Arr[i].NhapKA();
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
				cout<<"\nMoi ban nhap vao so sinh vien can them.";
				cin>>n;
				int dem=0;
				for(int i=index;i<n+index;i++)
				{
					cout<<"\nMoi ban nhap vao thong tin cua sinh vien thu "<<i+1<<endl;
					Arr[i].NhapKC();
					dem++;
				}
				index+=dem;
				cout<<"\nDa nhap xong!";
				system("pause");
			}
			break;
		case 3:
			{
				system("cls");
				cout<<"\n\t\tDanh Sach Sinh Vien khoi A.\n";
				cout<<setw(15)<<"Ma SV"<<setw(20)<<"Ten SV"<<setw(15)<<"Diem Toan"<<setw(15)<<"Diem Hoa"<<"Diem Ly"<<setw(15)<<"Tong Diem"<<endl;
				for(int i=0;i<index;i++)
				{
					Arr[i].XuatKA();
				}
                 cout<<endl;
				cout<<"\n\t\tDanh Sach Sinh Vien khoi C.\n"<<endl;
				cout<<setw(15)<<"Ma SV"<<setw(20)<<"Ten SV"<<setw(15)<<"Diem Van"<<setw(15)<<"Diem Su"<<"Diem Dia"<<setw(15)<<"Tong Diem"<<endl;
				for(int i=0;i<index;i++)
				{
					Arr[i].XuatKC();
				}
				system("pause");
			}
			break;
		/*case 4:
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
			}*/
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
