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
    int tuoi,i=0;
    char hten[30],tl;
    char diadiem[255],phone[15];
    float diemthi;
    dau=NULL;
    printf("\n\t\tnhap danh sach sinh vien:\n");
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
    int i=1;
    printf("\n%-5s %-15s %-10s %-10s %-15s %-20s","STT","Hoten","tuoi","Diemthi","   SDT","Diachi");
    p= dau;
    while(p !=NULL)
    {
        printf("%-5d %-17s %-10d %-9.1f %-15s %-255s",i++,p->hten,p->tuoi,p->diemthi,p->phone,p->diadiem);
        p=p->link;
    }

}
void xem()
{
    float diemthi;
    p_sv *tim;
    char hoten[30];
    printf("ban muon tim sinh vien nao: ");
    fflush(stdin);
    gets(hoten);
    tim = dau;
   while((tim != NULL) && (strcpy(tim->hten,hoten)))
		tim = tim->link;
    if(tim == NULL){
        printf("khong co sinh vien trong danh sach:thank");
    }
    else
    {
        p = (p_sv *)malloc(sizeof(p_sv));
        printf("nhap sinh vien can tim:");
        printf("ho ten:");
        fflush(stdin);
        gets(p->hten);
        if(p->diemthi >=8,5)
            printf("sinh vien da chung tuyen vao truong:");
        p->diemthi=diemthi;


        p ->link = tim->link;
		tim->link = p;
    }
       getch();
}
main()
{
    char tl;
    printf ("\t\tDANH SACH SINH VIEN HOC VIEN KY THUAT MAT MAX\n");
    do{
        printf("\n\tMENU:\n");
        printf("\n\t\tphim 1: nhap danh sach sinh vien:");
        printf("\n\t\tphim 2: danh sach sinh vien:");
        printf("\n\t\tphim 3: xem sinh vien chung tuyen:");
        printf("\n\t\tphim 4: thoat:");
        printf("\n\t\t=>chon: ");
        fflush(stdin);
        tl=getchar();
        switch(tl){
        case  1 : nhap();  break;
        case '2' : danhsach();   break;
        case '3' : xem();   break;
        case '4' : printf("\n\t\tCam on quy khac da su dung truong trinh:");
                   printf("\n\t\tngoodbyte hehehehe\n\n"); getch();  break;
        default : printf("\n\t\tQuy khach chon sai. MOi Quy khach chon lai:"); break;
        }

    }while(tl !='4');
}

