#include <stdio.h>
#include <conio.h>

typedef struct{
  char Ten_hang[30];
  int So_luong,Don_gia;
  long Thanh_tien;
}mat_hang;
mat_hang mh;
char tl;
long size = sizeof(mh);
void tao_tep(FILE *fp){
     int i=0;
     fp = fopen("SO_LIEU.C","wb");
     do{
	 printf("\nNhap don hang thu %d:\n",++i);
	 fflush(stdin);
	 printf(" Ten hang: ");	gets(mh.Ten_hang);
	 printf(" So luong: "); scanf("%d",&mh.So_luong);
	 printf(" Don gia: ");  scanf("%d",&mh.Don_gia);
	 mh.Thanh_tien = mh.So_luong * mh.Don_gia;

	 fwrite(&mh,size,1,fp);
	 printf("\nTiep tuc(Y/N): ");
	 fflush(stdin);
	 tl=getchar();
     } while(tl != 'n');
     fclose(fp);
}

void doc_tep(FILE *fp){
     long tong = 0;
     int i=0;
     fp = fopen("SO_LIEU.C","rb");
     printf("\n\t\tSO LIEU BAN HANG\n");
     printf("STT Ten Hang\tDon gia\tSo luong\tThanh tien\n");
     while(fread(&mh,size,1,fp)>0)
     {
	 printf("%2d  %s\t%d\t%d\t\t%d\n",++i,mh.Ten_hang,mh.So_luong,mh.Don_gia,mh.Thanh_tien);
	 tong += mh.Thanh_tien;
     }
     printf("\t\t\t\tTong tien: %d\n",tong);
     fclose(fp);
}
void main(){
    FILE *f;
    do{
       printf("\n\tMENU:\n");
       printf("\nPhim 1. Tao so lieu ban hang.");
       printf("\nPhim 2. Doc so lieu ban hang.");
       printf("\nPhim 3. Thoat.");
       printf("\n\nBan chon: :");
       fflush(stdin);
       tl = getchar();
       switch(tl){
	   case '1': tao_tep(f);	break;
	   case '2': doc_tep(f);	break;
       }
       getch();
    }while(tl != '3');
}
