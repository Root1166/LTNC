#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <malloc.h>

typedef struct sinhVien{
	char hten[30];
	int tuoi;
	float diemTB;
	struct sinhVien *link;
}p_sv;

p_sv *first, *last, *p;

void taoDS(){

}

void xuat(){

}

void themSau(){

}

void main(){
	char tl;
	do{
		printf("\n\tDANH SACH SINH VIEN");
		printf("\n\t\tCode by HuyHung");
		printf("\n\n\tMENU:\n");
		printf("\n Phim 1. Nhap danh sach.");
		printf("\n Phim 2. In danh sach.");
		printf("\n Phim 3. Them sinh vien(Them sau)");
		printf("\n Phim 4. Thoat.");
		printf("\n\n Ban chon: ");
		fflush(stdin);
		tl = getchar();
		switch(tl){
			case '1': taoDS();	 	break;
			case '2': xuat();		break;
			case '3': themSau(); 	break;
			case '4': printf("Cam on da su dung chuong trinh. Goodbye\n"); getch(); break;
			default : printf("Phim ban chon khong dung. Vui long thu lai.\n");
						getch();
						break;
		}
	}while(tl!='4');
}
