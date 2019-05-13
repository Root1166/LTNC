#include <stdio.h>
#include <conio.h>
#include<malloc.h>
#include <string.h>
typedef struct{
    char hoten[30];
    int tuoi;
    float diemtb;
    struct sinhvien *link;
}p_sv;
p_sv  *dau, *cuoi , *p;
void nhapsv()
{
     char hoten[30],tl;
     int tuoi;
     float diemtb;
     dau=NULL;
    do
    {
        p=(p_sv *)malloc(sizeof(p_sv));
        printf("\n\t\t nhap danh sach sinh vien \n");
        printf("\nHo ten: ");
        fflush(stdin);
        gets(hoten);
        printf("Tuoi: ");
        scanf("%d",&tuoi);
        printf("DiemTB: ");
        scanf("%f",&diemtb);
        strcpy(p->hoten,hoten);
        p->tuoi=tuoi;
        p->diemtb=diemtb;

        if(dau == NULL)
        {
            dau  = p;
            cuoi = p;
        }
        else{
            cuoi ->link =p;
            cuoi = p;

        }
        p->link= NULL;
        printf("\nCo muon nhap them sinh vien nua khong (c/k)\n");
        fflush(stdin);
        printf("\nY kien cua ban la : ");
        tl = getchar();
    }while(tl != 'k');
}
void danhsach()
{
    int i=0;
    printf("\n\tDanh sach sinh vien chung tuyen sinh dai hoc 2017-2018\n\n");
    printf("\n%-7s %-15s %-10s %-15s","STT","Hoten","Tuoi","DiemThi");
    p=dau;
    while(p!=NULL)
    {
    printf("\n%-3d %-19s %-10d %-10.1f ",++i,p->hoten,p->tuoi,p->diemtb);
    p=p->link;
    }
    getch();

}
void Suadiem()
{
    char hoten[30];
     float diemtb;
    p_sv  *tim ,*truoc;
    printf("\n\t\t Ban muon sua diem sinh vien nao\n");
    printf("Ho Ten: ");
    fflush(stdin);
    gets(hoten);
    tim=dau;
while((tim!=NULL)&&(strcmpi(tim->hoten,hoten))){
        truoc = tim;
        tim   = tim ->link;
    }
    if(tim==NULL){
     printf("\n\tkhong co sinh vien trong danh sach\n");

    }
    else{
            p=(p_sv *)malloc(sizeof(p_sv));
            printf("\nnhap diem sua : ");
            scanf("%d",&diemtb);
            p->diemtb=diemtb;

            dau->link=tim->link;
            tim->link=p;
            printf("\nDa sua song\n");
    }

    getch();

}
main()
{
    char tl;
    do{
        system("cls");
        printf ("\t\t   DANH SACH SINH VIEN HOC VIEN KY THUAT MAT MAX\n");
        printf("\n\t\tHo ten: Bui Van Cong");
        printf("\t\t\tLop:AT13CLC01\n\n\n");
        printf("\n\t\t\t  Danh sach sinh vien\n");
        printf("\n\t\tphim 1: nhan danh sach sinh vien");
        printf("\n\t\tphim 2: Danh sach sinh vien ");
        printf("\n\t\tphim 3: Sua diem ");
        printf("\n\t\tphim 4: thoat ");
        printf("\n\t\t=>chon phim: ");
        fflush(stdin);
        tl= getchar();
        system("cls");
        switch(tl){
        case '1': nhapsv();    break;
        case '2': danhsach();  break;
        case '3': Suadiem();   break;
        case '4': printf("\n\t\tCam omn quy khach da su dung chuong trinh\n\t\t\tgoodbyte ang see you again\n");  getch();   break;
        default : printf("\n\t\tQuy khach chon sai phim .Xin quy khach chon lai\n\t\t\tCam on quy khach\n"); getch();  break;
        }

    }while(tl != '4');

}
