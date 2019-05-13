#include <stdio.h>
#include <conio.h>
#include<malloc.h>
#include<string.h>

typedef struct sinhvien1{
    char hoten[30];
    int tuoi;
    float diemtb;
    char phone[15];;
    char diachi[255];
    struct sinhvien1 *link;
}sinhvien;

sinhvien *first ,*last, *p;

void nhap()
{
    char hoten[30],tl;
    int tuoi;
    float diemtb;
    char phone[15];
    char diachi[255];
    first = NULL;
    int i=0;

    do{
        printf("\n\n\t\tNhap Thong Tin Sinh Vien:\n");
        printf("nhap sinh vien thu %d",i+1);
        i++;
        printf("\nHo va ten:");
        fflush(stdin);
        gets(hoten);
        printf("Tuoi:");
        scanf("%d",&tuoi);
        printf("Diem TB: ");
		scanf("%f",&diemtb);
        printf("Dia chi:");
        fflush(stdin);
        gets(diachi);
        printf("SDT:");
        fflush(stdin);
        gets(phone);
        p=(sinhvien *)malloc(sizeof(sinhvien));
        strcpy(p->hoten,hoten);  strcpy(p->phone,phone); strcpy(p->diachi,diachi);
        p->tuoi=tuoi; p->diemtb=diemtb;
        if(first == NULL)
        {
            first = p;
            last  = p;
        }
        else
        {
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
void dsachSV()
{
    int i=1;

    printf("\ndanh sach sinh vien:\n");
    printf("%-5s %-15s %-10s %-15s %-15s %-255s","STT","HOTEN","Tuoi","DiemTB","phone","Diachi");
    p = first;
    while(p !=NULL)
    {
        printf("%-5d %-15s %-10d %-15.1f %-15s %-255s",i++,p->hoten,p->tuoi,p->diemtb,p->phone,p->diachi);
        p = p->link;
    }
    getch();
}
void themSV()
{
    int tuoi;
    float diem;
    sinhvien *tim;
    char dt[15],Diachi[255];
    char hoten[30];
    printf("\n\n\t\tCHEN THEM SINH VIEN:\n");
    printf("ban muon chem sau sinh vien nao:");
    fflush(stdin);
    gets(hoten);
    tim = first;
    while((tim != NULL) && (strcpy(tim->hoten,hoten)))
		tim = tim->link;
	if (tim == NULL)
		printf("Khong co sinh vien %s trong danh sach.\n",hoten);
    else
    {
        p =(sinhvien *)malloc(sizeof(sinhvien));
        printf("Hoten:");
        fflush(stdin);
        gets(p->hoten);
        printf("tuoi:");
        scanf("%d",&tuoi);
        printf("Diemtb:");
        scanf("%f",&diem);
        printf("Diachi:");
        fflush(stdin);
        gets(p->diachi);
        printf("SDT:");
        fflush(stdin);
        gets(p->phone);
        p->tuoi=tuoi;
        p->diemtb=diem;

        p->link = tim->link;
        tim->link=p;
        printf("\nda chen song.");
    }
    getch();
}

void xoa(){
	p_sv *tim, *truoc;
	char ten[30];
	clrscr();
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

int main()
{
    char tl;
    printf("\t\t\t************************\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**    bui van cong    **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t************************\n");
    do
    {
        printf("\tMENU:\n");
        printf("\t\tphim 1:nhap danh sach sinh vien:\n");
        printf("\t\tphim 2:Danh sach sinh vien:\n");
        printf("\t\tphim 3:Ban muon chen them vao sau sinh vien nao:\n");
        printf("\t\tphim 4:thoat:\n");
        printf("\t\t=>chon phim:");
        fflush(stdin);
        tl = getchar();

        switch(tl)
        {
            case '1' : nhap();       break;
            case '2' : dsachSV();    break;
            case '3' : themSV();     break;
			case '4' : xoa();        break;
            case '5' : printf("\n\n\tCAM ON QUY KHACH DA SU DUNG CHUONG TRINH:\n\tgoodbyte  and   see you again:\n\n\n\n\n\n");getch(); break;
            default  : printf("\nquy khach chon sai phim,xin moi thu lai?\n");
                        getch();
                         break;
        }
    }while(tl != '5');

}
