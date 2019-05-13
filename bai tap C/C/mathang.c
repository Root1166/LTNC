#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
typedef struct{
    char ten[30];
    int soluong;
    int gia;
    struct mathang * link;
}mh;
mh *dau, *cuoi, *p;
void nhap()
{
    char ten[30],tl;
    int soluong;
    int gia;
		printf("\n\tnhap danh sach cac loai mat hang\n");
    dau=NULL;
    do{
		system("cls");
		p=(mh *)malloc(sizeof(mh));
		printf("\nTen MH : ");
		fflush(stdin);
		gets(ten);
		printf("\nSo luong: ");
		scanf("%d",&soluong);
		printf("\nGia: ");
		scanf("%d",&gia);
		strcpy(p->ten,ten);
		p->soluong=soluong;
		p->gia=gia;
    if(dau == NULL)
    {
        dau = p;
        cuoi = p;
    }
    else{

        cuoi->link=p;
        cuoi = p;
    }
		p->link = NULL;
		printf("\nCo nhap nua hay khong (C/k):\n");
		fflush(stdin);
		printf("\nDap an cua ban la: ");
		tl = getchar();
		system("cls");
    }while(tl != 'k');
}
void danhsach()
{
    int i=0;
    FILE *f;
    int thanhtien=1;
		thanhtien=(p->gia)*(p->soluong);
		p=p->link;
		f=fopen("DATA.txt","w");
		fprintf(f,"\n\t\t     Quan Ly Mat Cac Loai Mat Hang\n");
		fprintf(f,"\n\n\t\t\tDanh Sach Cac mat hang\n\n");
		printf("\n\n\t\t\tDanh Sach Cac mat hang\n\n");
		printf("\n%-7s %-15s %-15s %-14s %-15s","STT","Mathang","Gia","Soluong","Thanhtien");
    fprintf(f,"\n%-7s %-15s %-15s %-14s %-15s" ,"STT","Mathang","Gia","Soluong","Thanhtien");
    p = dau ;
    while(p != NULL){
        printf("\n%-7d %-15s %-15d %-14d %-15d\n",++i,p->ten,p->gia,p->soluong,thanhtien);
        fprintf(f,"\n%-7d %-15s %-15d %-14d %-15d",++i,p->ten,p->gia,p->soluong,thanhtien);
        p=p->link;
    }
    fclose(f);
    getch();
}

main()
{
    char tl;
    do{
        system("cls");
        printf("\n\t\t\tCHUONG TRINH CAC LOAI MAT HANG\n");
        printf("\n\t\tHo ten: Bui Van Cong");
        printf("\t\t\tLop:AT13CLC01\n\n\n");
        printf("\n\n\t\t\tCHUONG TRINH CAC LOAI MAT HANG\n");
        printf("\n\t\tphim 1: nhap danh sach cac loai mat hang\n");
        printf("\n\t\tphim 2: danh sach cac loai mat hang \n");
        printf("\n\t\tphim 3: thoat :");
        printf("\n\t=>chon phim ");
        fflush(stdin);
        tl = getchar();
        system("cls");
        switch(tl){
        case '1': nhap();         break;
        case '2': danhsach();     break;
        case '3': printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\tCam on quy khach da su dung chuong trinh\n");getch(); break;
        default : printf("\n\n\n\n\n\n\n\n\n\n\n\t\tQuy khach da chon sai phim.Moi Quy khach chon lai\n\n");  getch();  break;
        }
    }while(tl!='3');

}
