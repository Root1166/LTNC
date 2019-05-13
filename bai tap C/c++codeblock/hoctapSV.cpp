#include<iostream>
#include<string>
#include<conio.h>
#include<math.h>
#include<stdio.h>
using namespace std;
class Student {
//public:
//	int setNumber(){
//		int Number=0;
//		cout<<"set numberStudent "; cin>>Number;
//		numberStudent = Number;
//
//	}
//	int getNumber(){
//
//		return numberStudent;
//	}
//
	private:
		string name;
		int age;
		int ScoresMath, ScoresPhysics, ScoresLiteruature;
//nhap vao thong tin hoc sinh
	public:
		int Nhap() {
			cout<<"set Name : ";
			getline(cin,name);
			cout<<"set Age : ";
			cin>>age;
			cout<<" set Scores Math :";
			cin>>ScoresMath;

			cout<<" set Scores literuature :";
			cin>>ScoresLiteruature;
			cout<<" set Scores phisics :";
			cin>>ScoresPhysics;

			cin.ignore(1);
		}

//in ra thong tin hoc sinh
		int Show() {
			cout<<" Name : "<<name<<endl;

			cout<<" Age : "<<age<<endl;

			cout<<" Scores Math : "<<ScoresMath<<endl;;


			cout<<" Scores literuature :"<<ScoresLiteruature<<endl;

			cout<<" Scores physics :"<<ScoresPhysics<<endl;
		}

		// Tinh diem TB
		float TB() {
			float tb;
			tb = (float)(ScoresMath+ScoresPhysics+ScoresLiteruature)/3;
			return tb;
		}


// Xep Loai
		string xepLoai() {//xep lam cai nay xem nao
			if(TB()<5) {
				return "yeu";
			}
			if (TB() < 6.5) {
				return "Trung binh";
			}
			if(TB() < 8) {
				return "Kha";
			}
			return "Gioi";
			//2 lan o day voi 1 lan o
		}
};

class QLSV {
//	 quan li so sinh vien
	private:
		int soSinhVien;
		Student *st, temp;
	public:
		void nhapTT() {
			cout << "Nhap so sinh vien:";
			cin >> soSinhVien;
			cin.ignore();    //fflush(stdin);

			st = new Student[soSinhVien];

			for(int i = 0; i < soSinhVien; i++) {
				cout<<"set information of student "<<i+1<<endl;
				st[i].Nhap();
			}
		}

		void xuatTT() {
			for(int i = 0; i < soSinhVien; i++) {
				cout<<"Information of Student number " <<i+1<<endl;
				st[i].Show();
				cout << "Diem TB:"<< st[i].TB()<<endl;
				cout << "Xep Loai:" << st[i].xepLoai() << endl;
				cout<<"=====================================\n";
			}
		}
	public:
		void top(int n) {
			// tim TB max
			Student temp;
			for(int i=0; i < soSinhVien - 1; i++) {
				for(int j= i+1; j < soSinhVien; j++) {
					if(st[i].TB()<st[j].TB()) {
						temp = st[i];
						st[i]= st[j];
						st[j]= temp;
					}
				}
			}
			for(int i=0; i<n; i++) {
				cout<<"Top " << i+1 << ":" << endl;
				st[i].Show();
				cout << "\n====================================\n";
			}
		}
//them sua xoa
public:
void them() {
	int add;
	cout<<"How much do you want to add ? "<<endl; cin>> add;
	fflush(stdin);
	int j = soSinhVien;
	soSinhVien += add;
	st = new Student[soSinhVien];
	for(int i = j; i < soSinhVien; i++) {
		cout<<"set information of student "<<i+1<<endl;
		st[i].Nhap();

		for(int i = 0; i < soSinhVien; i++) {
				cout<<"Information of Student number " <<i+1<<endl;
				st[i].Show();
				cout << "Diem TB:"<< st[i].TB()<<endl;
				cout << "Xep Loai:" << st[i].xepLoai() << endl;
				cout<<"=====================================\n";
			}
	}
}
public:
void xoa(){
	int place;
	cout<<"where do you want to delete : "<<endl; cin>>place;

	temp = st[place]; st[place] = st[soSinhVien-1];

	soSinhVien -= 1; st = new Student[soSinhVien]; fflush(stdin);

	cout<< "then to delete :\n";

	for(int i = 0; i < soSinhVien; i++) {
		cout<<"Information of Student number " <<i+1<<endl;
		st[i].Show();
		cout << "Diem TB:"<< st[i].TB()<<endl;
		cout << "Xep Loai:" << st[i].xepLoai() << endl;
		cout<<"=====================================\n";
	}

}

void dele() {
	{
		delete[] st;
	}
}


};
int main() {
	QLSV qLSV;
	qLSV.nhapTT();
	qLSV.xuatTT();
	cout << "Nhap top diem can xem:";
	int n;
	cin >> n;
	qLSV.top(n);
	qLSV.them();
	//qLSV.xoa();
	//qLSV.xuatTT();
	qLSV.dele();
	return 0;
}
