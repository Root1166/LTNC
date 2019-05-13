#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
typedef struct{
    char hten[30];
    int tuoi;
    float diemthi;
    char diadiem[255];
    char phone[15];
    struct svien *link;
}p_sv;
 p_sv  *dau, *cuoi, *p;
void nhap()
{
    char hten[30];
    int tuoi,i=0;
    float diemthi;
    char diadiem[255],tl;
    char phone[15];
    dau=NULL;
    do{
        fflush(stdin);
        printf("sinh vien %d",i+1);
        printf("\nHoten: ");
        gets(hten);
        printf("Tuoi: ");
        scanf("%d",&tuoi);
        printf("Diem thi: ");
        scanf("%f",&diemthi);
        printf("Dia Chi: ");
        fflush(stdin);
        gets(diadiem);
        printf("SDT: ");
        fflush(stdin);
        gets(phone);
        p=(p_sv *)malloc(sizeof(p_sv));
        strcpy(p->hten,hten);
        strcpy(p->diadiem,diadiem);
        strcpy(p->phone,phone);
        p->tuoi=tuoi;   p->diemthi=diemthi;
        if(dau == NULL){
            dau = p;
           cuoi = p;
        }
        else{
            cuoi->link = p;
            cuoi = p;
        }
        p->link = NULL;
        i++;
        printf("co tiep tuc(c) or khong (k):");
        fflush(stdin);
        printf("\ndap an cua ban:");
        tl = getchar();
    }while(tl != 'k');
}

void danhsach()
{
    int i=0;
    FILE *f;
    f=fopen("sv.txt","w");
    printf("\n%-5s %-15s %-10s %-10s %-15s %-20s","STT","Hoten","tuoi","Diemthi","   SDT","Diachi");
    fprintf(f,"\n%-5s %-15s %-10s %-10s %-15s %-20s","STT","Hoten","tuoi","Diemthi","   SDT","Diachi");
    p = dau;
    while(p !=NULL)
    {
    printf("\n%-5d %-17s %-10d %-9.1f %-15s %-255s",++i,p->hten,p->tuoi,p->diemthi,p->phone,p->diadiem);
    fprintf(f,"\n%-5d %-17s %-10d %-9.1f %-15s %-255s",++i,p->hten,p->tuoi,p->diemthi,p->phone,p->diadiem);
    p=p->link;
    }
getch();
fclose(f);
}
void chen()
{
    FILE *f;
    char hten[30];
    int tuoi;
    float diemthi;
    char diadiem[255];
    char phone[15];
    f=fopen("sv.txt","a");
    printf("\nBan muon chen sau sinh vien nao\n");
    printf("Ho Tem: ");
    fflush(stdin);
    gets(hten);
    p_sv *tim;
    tim = dau;
    while((tim != NULL)&&(strcmpi(tim->hten,hten)))
       tim=tim->link;
    if(tim == NULL){
        printf("\nkhong co sinh vien trong danh sach");
    }
    else
    {
    p= (p_sv *)malloc(sizeof(p_sv));
    printf("\n\t\tNhap thong tin sinh vien :\n");
    printf("HO ten: ");
    fflush(stdin);
    gets(p->hten);
    printf("Tuoi: ");
    scanf("%d",&tuoi);
    printf("DiemTb: ");
    scanf("%f",&diemthi);
    printf("SDT: ");
    fflush(stdin);
    gets(p->phone);
    printf("Diadiem : ");
    gets(p->diadiem);
    p->tuoi=tuoi;
    p->diemthi=diemthi;

    p->link = tim->link;
    tim->link = p;
    printf("\nDa chen xong\n");
    }
    getch();
    fclose(f);
}
void xoa()
{
    p_sv *tim, *truoc;
    char ten[30];
    tim = dau;
    printf("\nban muon xoa sinh vien nao \n");
    printf("HO Ten: ");
    fflush(stdin);
    gets(ten);
   while((tim!=NULL)&&(strcmpi(tim->hten,ten)))
   {
    tim = truoc;
    tim=tim->link;
   }
   if(tim == NULL)
   {
       printf("khong co sinh vien trong danh sach \n");
   }
    else{
    if(tim == dau)
        dau=tim->link;
    else
    tim->link=dau->link;
    free(tim);
    printf("\nDa Xoa Song\n");

    }
getch();
}


void timSV()
{
    char hten[30];
    int tuoi,i=0;
    float diemthi;
    char diadiem[255];
    char phone[15];
    printf("\nBan muon tim sinh vien nao\n");
    printf("HO Ten: ");
    fflush(stdin);
    gets(hten);
    p_sv *tim;
    tim = dau;
    while((tim != NULL)&&(strcmpi(tim->hten,hten)))
       tim=tim->link;
    if(tim == NULL){
        printf("\nkhong co sinh vien trong danh sach");
    }
    else{
        if(p->diemthi>=8)
        {
            printf("\nsinh vien dat loai gioi\n");
            printf("\n%-5s %-15s %-10s %-10s %-15s %-20s","STT","Hoten","tuoi","Diemthi","   SDT","Diachi");
            printf("\n%-5d %-17s %-10d %-9.1f %-15s %-255s",++i,p->hten,p->tuoi,p->diemthi,p->phone,p->diadiem);
        }
        else
        {
            printf("\nsinh vien kha\n");
        }

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
        printf("\n\tMENU:\n");
        printf("\n\t\tphim 1: nhap danh sach sinh vien:");
        printf("\n\t\tphim 2: danh sach sinh vien:");
        printf("\n\t\tphim 3: chen them sinh vien ");
        printf("\n\t\tphim 4: Xoa sinh vien");
        printf("\n\t\tphim 5: tim kiem sinh vien ");
        printf("\n\t\tphim 6: thoat ");
        printf("\n\t\t=>chon: ");
        fflush(stdin);
        tl=getchar();
        system("cls");
        switch(tl){
        case '1' : nhap();       break;
        case '2' : danhsach();   break;
        case '3' : chen();       break;
        case '4' : xoa();        break;
        case '5' : timSV();      break;
        case '6' : printf("\n\t\tCam on quy khac da su dung truong trinh:");
                   printf("\n\t\tngoodbyte hehehehe\n\n"); getch();  break;
        default : printf("\n\t\tQuy khach chon sai. MOi Quy khach chon lai:"); break;
        }

    }while(tl !='6');
}

