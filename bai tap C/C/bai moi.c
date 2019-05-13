#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
typedef struct{

    char hoten[30];
    int tuoi;
    double cao[20];

    struct sinhvien * link;
}sinhvien;
sinhvien *dau, *cuoi,  *p;
void nhap()
{
    char hoten[30];
    int tuoi;
    double cao[20];
    dau = NULL;
    char tl;
    do
    {
        p = (sinhvien *)malloc(sizeof(sinhvien));
        printf("\nHoten : ");
        fflush(stdin);
        gets(hoten);
        printf("tuoi: ");
        scanf("%d",&tuoi);
        printf("chieu cao: ");
        fflush(stdin);
        gets(cao);
        strcpy(p->hoten,hoten);
        strcpy(p->cao,cao);
        p->tuoi=tuoi;



        printf("tiep hoac khong (C/K)\n");
        fflush(stdin);
        tl==getchar();

    }while(tl != "k");

}
void danhsach()
{
    int i=1;
    printf("\n%-5s %-15s %-10s %-10s ","STT","Hoten","tuoi","Cao");
    p= dau;
    while(p !=NULL)
    {
        printf("%-5d %-17s %-10d %-9.1f ",i++,p->hoten,p->tuoi,p->cao);
        p=p->link;
    }

}
void chen()
{





}

main()
{
    char tl;
    printf("\nCHUONG TRINH BIEU DIEN CHIEU CAO CUA HOC SINH SINH VIEN\n");
    do{
        printf("\n\t\tphim 1: Nhap sinh vien \n");
        printf("\n\t\tphim 2: Danh sach Sinh vien \n");
        printf("\n\t\tphim 3: Chen them sinh vien \n");
        printf("\n\t\tphim 4: Xoa sinh vien \n");
        printf("\n\t\tphim 5: thoat ");
        printf("\n\t=>chon ");
        fflush(stdin);
        tl = getchar();
       switch(tl){
       case '1':nhap();
       case '2':danhsach();
       case '3':chen();
       case '4':Xoa();
       case '5':printf("\n\t\tCam on quy khach da su dung truong trinh\n\t\tgoodbyte and see you again\n"); getch();  break;
       default: printf("\n\t\tQuy khach da chon sai phim moi quy khac chon lai.Xin Tran Thanh Cam On.\n");
       }
    }while(tl != '5');

}
