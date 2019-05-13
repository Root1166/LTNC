#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
typedef struct{

    char hoten[30];
    int tuoi;
    float diemtb;
    char diachi[255],phone[15];

    struct sinhvien *link;
}p_sv;

p_sv *dau, *cuoi, *p;

void nhapSV()
{
    char hoten[30];
    int tuoi;
    float diemtb;
    char diachi[255],phone[15],tl;
    dau= NULL;
    do{
        system("cls");
        printf("\n\t\t nhap danh sach sinh vien \n");
        p=(p_sv * )malloc(sizeof(p_sv));
        printf("\nHO Ten: ");
        fflush(stdin);
        gets(hoten);
        printf("\nTuoi: ");
        scanf("%d",&tuoi);
        printf("DiemTB: ");
        scanf("%f",&diemtb);
        printf("Dia Chi: ");
        fflush(stdin);
        gets(diachi);
        printf("SDT: ");
        fflush(stdin);
        gets(phone);
        strcpy(p->hoten,hoten);
        strcpy(p->diachi,diachi);
        strcpy(p->phone,phone);
        p->tuoi=tuoi;
        p->diemtb=diemtb;
        system("cls");
        if(dau == NULL)
        {
            dau  = p;
            cuoi = p;
        }
        else
        {
            cuoi ->link=p;
            cuoi = p;
        }
        p->link=NULL;
        printf("\nCo tiep tucj nua khong (c/k)");
        fflush(stdin);
        printf("\nY kien cua ban la: ");
        tl = getchar();
    }while(tl!='k');

}
void danhsach()
{
    int i=0;
    printf("\n\tDanh sach sinh vien chung tuyen sinh dai hoc 2017-2018\n\n");
    printf("\n%-7s %-15s %-5s %-13s %-10s %-255s","STT","Hoten","Tuoi","DiemThi","SDT","Diachi");
    p=dau;
    while(p!=NULL)
    {
    printf("\n%-3d %-19s %-6d %-8.1f %-12s %-255s",++i,p->hoten,p->tuoi,p->diemtb,p->phone,p->diachi);
    p=p->link;
    }

    getch();

}

void timSV()
{
    p_sv *tim;
    char hoten[30];
    int tuoi,i=0;
    float diemtb;
    char diachi[255],phone[15];
    printf("\nBan muon tim sinh vien nao\n");
    printf("HO Ten: ");
    fflush(stdin);
    gets(hoten);
    tim  =  dau;
    while((tim != NULL)&&(strcmpi(tim->hoten,hoten)))
    tim = tim ->link;
    if(tim == NULL)
    {
        printf("\n khong co sinh vien trong danh sach sinh vien\n");
    }
    else{
     if(p->diemtb >=8.5){
             printf("\t\t\t\tsinh vien da chung tuyen vao truong:\n");
             printf("\n%-5s %-17s %-13s %-18s %-15s %-255s","STT","Hoten","Tuoi","DiemThi","SDT","Diachi");
             printf("\n%-5d %-17s %-15d %-14.1f %-15s %-255s",++i,p->hoten,p->tuoi,p->diemtb,p->phone,p->diachi);
     }
      else{
            printf("\nsinh vien kha\n");
    }
 }
 getch();
}
void chenSV()
{
     p_sv *tim;
    char hoten[30];
    int tuoi;
    float diemtb;
    char phone[15],diachi[255];
    printf("ban muon chen them sinh vien vao sau sinh vien nao:\n\n");
    printf("\nHoten: ");
    fflush(stdin);
    gets(hoten);
    tim = dau;
    while((tim!=NULL)&&(strcmpi(tim->hoten,hoten)))
        tim=tim->link;
    if(tim == NULL ){
        printf("\nkhong co sinh vien trong danh sach sinh vien trung tuyen\n");
    }else{
        system("cls");
        p=(p_sv *)malloc(sizeof(p_sv));
        printf("\n nhap thong tin sinh vien can chen vao danh sach\n");
        printf("\nHO Ten: ");
        fflush(stdin);
        gets(hoten);
        printf("\nTuoi: ");
        scanf("%d",&tuoi);
        printf("DiemTB: ");
        scanf("%f",&diemtb);
        printf("Dia Chi: ");
        fflush(stdin);
        gets(diachi);
        printf("SDT: ");
        fflush(stdin);
        gets(phone);
        system("cls");
        strcpy(p->hoten,hoten);
        strcpy(p->diachi,diachi);
        strcpy(p->phone,phone);
        p->tuoi=tuoi;
        p->diemtb=diemtb;


        p->link=tim->link;
        tim->link=p;
        printf("\nDa chen song sinh vien vao danh sach\n");
    }
    getch();
}
void XoaSv()
{
     p_sv *tim, *truoc;
     char hoten[30];
     printf("moi ban nhap sinh vien can xoa \n");
     printf("HO ten: ");
     fflush(stdin);
     gets(hoten);
     tim = dau;
 while((tim!=NULL)&&(strcmpi(tim->hoten,hoten))){
        truoc = tim;
        tim   = tim ->link;
    }
    if(tim == NULL){
        printf("\n\t\t\tkhong the xoa duoc\n");
        printf("\n\tvi khong co sinh vien %s trong danh sach \n",hoten);
  }
    else{
    if(tim == dau)
        dau=tim ->link;
    else
       truoc ->link = tim ->link;
        free(tim);
        printf("\n\t\tDa Xoa song sinh vien ma ban muon xoa\n");
  }
    getch();
}
main()
{
    char tl;
    do{
        system("cls");
        printf("\n\t\tDanh sach sinh vien trung tuyen \n");
        printf("\n\t Bui van Cong");
        printf("\t\t\t AT13CLC01\n");
        printf("\n\t MENU : \n");
        printf("\n\t\tphim 1: nhap danh sach sinh vien");
        printf("\n\t\tphim 2: danh sach sinh vien ");
        printf("\n\t\tphim 3: tim sinh vien ");
        printf("\n\t\tphim 4: chen them sinh vien");
        printf("\n\t\tphim 5: Xoa sinh vien ");
        printf("\n\t\tphim 6: thoat ");
        printf("\n\t=>chon phim : ");
        fflush(stdin);
        tl=getchar();
        system("cls");
        switch(tl){
        case '1': nhapSV();     break;
        case '2': danhsach();   break;
        case '3': timSV();      break;
        case '4': chenSV();     break;
        case '5': XoaSv();      break;
        case '6': printf("\n\t\t  Cam on quy khach da su dung truong trinh\n \t\t\t goodbyte and see you again ");  getch();  break;
        default : printf("\n\t\tQuy khach da chon sai phim.Moi quy khach chon lai phim \n");getch();  break;
        }
    }while(tl != '6');
}
