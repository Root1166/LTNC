#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
void tamgiac()
{
    int a,b,c;
    printf("nhap a = ");
    scanf("%d",&a);
    printf("nhap b = ");
    scanf("%d",&b);
    printf("nhap c = ");
    scanf("%d",&c);
    if ((a+b<c)||(a+c<b)||(b+c<a))
        printf("\nkhong phai ba canh cua mot tam giac\n");
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
        printf("\nTam giac do la tam giac vuong\n");
    else if (a==b==c)
        printf("\ntam giac do la tam giac dieu\n");
    else if (((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(b!=a)))
        printf("\nTam giac do la tam giac can ");
    else if (((a*a+b*b==c*c)&&(a==b))||((a*a+c*c==b*b)&&(a==c))||((b*b+c*c==a*a)&&(b==c)))
        printf("\n Tam gioac do la tam giac vuong can\n");
    else printf("\nTam giac do la tam giac thuong\n");
    getch();
}

typedef struct{
    char hoten[30];
    int tuoi;
    float diemTB;
    char phone[15];
    char diadiem[255];

    struct sinhVien *link;
}p_sv;

p_sv *dau, *cuoi, *p;

void nhap()
{
    char hoten[30];
    int i=0,tuoi;
    float diemTB;
    char phone[15],tl;
    char diadiem[255];
    dau = NULL;
    do{
        system("cls");
        printf("\n\t\tnhap danh sach sinh vien \n");
        printf("HO ten: ");
        fflush(stdin);
        gets(hoten);
        printf("Tuoi: ");
        scanf("%d",&tuoi);
        printf("Diem TB: ");
        scanf("%f",&diemTB);
        printf("SDT: ");
        fflush(stdin);
        gets(phone);
        printf("Dia Chi: ");
        fflush(stdin);
        gets(diadiem);
        p = (p_sv *)malloc(sizeof(p_sv));

        strcpy(p->hoten,hoten);
        strcpy(p->phone,phone);
        strcpy(p->diadiem,diadiem);
        p->tuoi=tuoi;
        p->diemTB=diemTB;
        if(dau == NULL){
           dau  = p;
           cuoi = p;
        }
        else{
            cuoi->link = p;
            cuoi = p;
        }
        p->link = NULL;
        i++;
        printf("tiep tuc hay khong (C|k)\n");
        fflush(stdin);
        printf("Ban chon: ");
        tl = getchar();
        system("cls");
    }while( tl != 'k');

}
void danhsach()
{
    int i=0;
    printf("\n\t\t\t DANH SACH SINH VIEN \n");
    printf("\n%-7s %-16s %-13s %-12s %-14s %-20s","STT","HO VA TEN","  TUOI","DIEM TB","SDT","DIA CHI");
    p = dau;
    while(p != NULL){
    printf("\n%-5d %-20s %-12d %-9.1f %-15s %-255s",++i,p->hoten,p->tuoi,p->diemTB,p->phone,p->diadiem);
    p = p->link;
    getchar();
    }
 getchar();
}
void chenthem()
{
    char ten[30];
    int tuoi;
    float diemTB;
    char phone[15],diadiem[255];
    p_sv *tim;
    printf("\n\t\tthem sinh vien\n");
    printf("ban muon chen them sinh vien vao sau sinh vien nao:\n");
    printf("hoten: ");
    fflush(stdin);
    gets(ten);
    tim = dau;
    while((tim != NULL)&&(strcmpi(tim->hoten,ten)))
    tim = tim ->link;
    if( tim == NULL){
        printf("\nkhong tim thay sinh vien trong danh sach\n");
    }
    else{
    p= (p_sv *)malloc(sizeof(p_sv));
    printf("\n\t\tNhap thong tin sinh vien\n");
    printf("HO ten: ");
    fflush(stdin);
    gets(p->hoten);
    printf("Tuoi: ");
    scanf("%d",&tuoi);
    printf("DiemTb: ");
    scanf("%f",&diemTB);
    printf("SDT: ");
    fflush(stdin);
    gets(p->phone);
    printf("Diadiem : ");
    gets(p->diadiem);
    p->tuoi=tuoi;
    p->diemTB=diemTB;

    p->link = tim->link;
    tim->link = p;
    printf("\n\n\t\t\t\tDa chen xong\n");
    }
    getchar();

}
void xoaSV()
{
    p_sv *tim, *truoc;
    char ten[30];
    printf("\nXoa sinh vien trong danh sach \n");
    printf("nhap ten sinh vien can xoa :\n");
    printf("HO ten: ");
    fflush(stdin);
    gets(ten);
    tim = dau;
    while((tim != NULL)&&(strcmpi(tim->hoten,ten)))
    {
        truoc = tim;
        tim = tim->link;
    }
    if(tim == NULL)
    {
        printf("\nkhong co sinh vien trong danh sach \n");
    }
    else{
        if(tim == dau)
            dau = tim ->link;
        else
         truoc ->link = tim ->link;
         free(tim);
        printf("\n Da xoa song");
    }
    getchar();
}
main()
{
    char tl;
    do{
            system("cls");
            printf("\n\t\t\tCHUONG TRINH DANH SACH SINH VIEN \n");
            printf("\n\t\tHo ten: Bui Van Cong");
            printf("\t\t\tLop:AT13CLC01\n\n\n");
            printf("\n\tMENU:");
            printf("\n\t\tphim 1: nhap danh sach sinh vien  ");
            printf("\n\t\tphim 2: danh sach sinh vien ");
            printf("\n\t\tphim 3: chen them sinh vien ");
            printf("\n\t\tphim 4: Xoa sinh vien trong danh sach ");
            printf("\n\t\tphim 5: xet ttam giac ");
            printf("\n\t\tphim 6: thoat ");
            printf("\n\t\t=>chon phim: ");
            fflush(stdin);
            tl = getchar();
            system("cls");
            switch(tl){
            case 1: nhap();        break;
            case '2': danhsach();    break;
            case '3': chenthem();    break;
            case '4': xoaSV();       break;
            case '5': tamgiac();     break;
            case '6': printf("\n\n\n\n\n\n\n\n\n\n\n\t\tCam on quy khach da su dung chuong trinh.\n\t\t\tHen gap lai quy khach\n\n");     break;
            default : printf("\n\n\n\n\n\n\n\n\n\n\n\t\tQuy khach da chon sai phim moi quy khach chon lai\n");
            getchar();  break;
        }

    }while(tl != '6');

}
