#include <stdio.h>
#include <conio.h>
#include <string.h>
//#include <alloc>

typedef struct sinhVien{
	char hten[30];
	int tuoi;
	float diemTB;
	struct sinhVien *link;
}p_sv;

p_sv *first, *last, *p;

void taoDS(){
	char ht[30],tl;
	int i=0,tuoi;
	float dtb;
	first = NULL;
	do{
		//clrscr();
		printf("\n\tPHIEU NHAP THONG TIN SINH VIEN.\n\n");
		fflush(stdin);
		printf("Sinh vien %d:\n",i+1);
		printf(" Ho ten: ");	gets(ht);
		printf(" Tuoi: "); 		scanf("%d",&tuoi);
		printf(" Diem TB: "); 	scanf("%f",&dtb);
		p = (p_sv *)malloc(sizeof(p_sv));
		strcpy(p->hten,ht);
		p->diemTB = dtb; 	p->tuoi = tuoi;
		if(first == NULL){
			first = p;
			last = p;
		}else{
			last->link = p;
			last = p;
		}
		p->link = NULL;
		i++;
		printf("\n Tiep tuc(Y)\n Thoat(N\n");
		fflush(stdin);
		printf(" Dap an cua ban: ");
		tl = getchar();
	}while(tl != 'n');
}

void xuat(){
	int i=0;
	//clrscr();
	printf("\n\tDANH SACH SINH VIEN\n\n");
	printf("STT Ho ten\tTuoi\tDiem TB\n");
	p = first;
	while(p != NULL){
		printf("%2d  %s\t%d\t%.2f\n",++i,p->hten,p->tuoi,p->diemTB);
		p = p->link;
	}
	getch();
}

void themSau(){
	int tuoi;
	float diem;
	p_sv *tim;
	char ten[30];
	printf("\n\tTHEM SINH VIEN\n");
	printf("Ban muon chen sau sinh vien nao: ");
	fflush(stdin);
	gets(ten);
	tim = first;
	while((tim != NULL) && (strcmpi(tim->hten,ten)))
		tim = tim->link;
	if (tim == NULL)
		printf("Khong co sinh vien %s trong danh sach.\n",ten);
	else{
		p = (p_sv *)malloc(sizeof(p_sv));
		printf(" Nhap ho ten: ");
		fflush(stdin);
		gets(p->hten);
		printf(" Nhap tuoi: ");
		scanf("%d",&tuoi);
		printf(" Nhap diem trung binh: ");
		scanf("%f",&diem);
		p->tuoi = tuoi;
		p->diemTB = diem;

		p->link = tim->link;
		tim->link = p;
		printf("Da chen xong.\n");
	}
	getch();
}
void xoa(){
	p_sv *tim, *truoc;
	char ten[30];
	//clrscr();
	printf("\n\tXOA SINH VIEN KHOI DANH SACH.\n");
	printf("Nhap ten sinh vien can xoa: ");
	fflush(stdin);
	gets(ten);
	tim = first;
	while((tim != NULL) && (strcmpi(tim->hten,ten))){
		truoc = tim;
		tim = tim->link;
	}
	if(tim == NULL)
		printf("Khong co sinh vien %s trong danh sach.\n",ten);
	else{
		if(tim == first)
			first = tim->link;
		else
			truoc->link = tim->link;
		free(tim);
		printf("Da xoa xong.\n");
	}
	getch();
}

int main(){
	char tl;
	do{
		//clrscr();
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
			case '4': xoa();        break;
			case '5': printf("Cam on da su dung chuong trinh. Goodbye\n"); getch(); break;
			default : printf("Phim ban chon khong dung. Vui long thu lai.\n");
						getch();
						break;
		}
	}while(tl!='5');
}
