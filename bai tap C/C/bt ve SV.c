#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <malloc.h>

typedef struct sinhVien{
	char hten[30];
	int tuoi;
	float diemTB;
	char phone[15];
	struct sinhVien *link;
}p_sv;

typedef struct tlist
{
    p_sv *first, *last, *p;

}list;

void taoDS(list &l,p_sv*p)
{
	char ht[30],tl;
	int i=0,tuoi;
	float dtb;
	char phone[15];
	first = NULL;list &l,node*p
	do{
		printf("\n\tPHIEU NHAP THONG TIN SINH VIEN.\n\n");
		fflush(stdin);
		printf("Sinh vien %d:\n",i+1);
		printf(" Ho ten: ");
		gets(ht);
		printf(" Tuoi: ");
		scanf("%d",&tuoi);
		printf(" Diem TB: ");
		scanf("%f",&dtb);
		printf("SDT:");
		fflush(stdin);
		gets(phone);
		p = (p_sv *)malloc(sizeof(p_sv));
		strcpy(p->hten,ht);
		p->diemTB = dtb; 	p->tuoi = tuoi;    strcpy(p->phone,phone);
		if(first == NULL){
			first = p;
			last = p;
		}else{
			last->link = p;
			last = p;
		}
		p->link = NULL;
		i++;
		printf("\n Tiep tuc(C) or Thoat(K)\n");
		fflush(stdin);
		printf(" Dap an cua ban: ");
		tl = getchar();
	}while(tl != 'k');
}
void xuat()
{
	int i=0;

	printf("\n\tDANH SACH SINH VIEN\n\n");
	printf("%-5s  %-15s%-10s\t%-10s%10s\n","STT", "  Ho ten","     \tTuoi","   Diem TB","  DT");
	p = first;
	while(p != NULL){
		printf("%-5d  %-15s%13d\t%8.1f%15s\n",i++,p->hten,p->tuoi,p->diemTB,p->phone);
		p = p->link;
	}
	getch();
}

void themSau()
{
	int tuoi;
	float diem;
	char phone[15];
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
	else
    {
		p = (p_sv *)malloc(sizeof(p_sv));
		printf(" Nhap ho ten: ");
		fflush(stdin);
		gets(p->hten);
		printf(" Nhap tuoi: ");
		scanf("%d",&tuoi);
		printf(" Nhap diem trung binh: ");
		scanf("%f",&diem);
		printf("nhap so dien thoai:");
		fflush(stdin);
		gets(p->phone);
		p->tuoi = tuoi;
		p->diemTB = diem;



		p->link = tim->link;
		tim->link = p;
		printf("Da chen xong.\n");
	}
	getch();
}
void main()
{
	char tl;
	do{
		printf("\n\tDANH SACH SINH VIEN");
		printf("\n\t   Code by Cong");
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
