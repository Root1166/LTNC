#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
typedef struct{
    char ma[8];
    int sotien;


   struct ATM *link;

}atm;
atm *dau, *cuoi, *p;
void mapin()
{
    char ma[8];
    printf("\n\t\tMat khau: ");
    fflush(stdin);
    gets(ma);
    strcpy(p->ma,ma);





}
void nhap()
{
    printf("\nmoi ban nhap so tien can rut\n");
    printf("voi cac menh gia nhu sau\n");
    printf("10.000                50.000");
    printf("100.000               200.000");
    printf("500.000               1.000.000");




}
void Ruttien()
{

    printf("ahiahihfihasifh");


}
void thaymapin()
{








}
void taikhoan()
{




}

main()
{
     char tl;
    do{
    printf("\n\t\t\tATM xin kinh chao quy khach\n");
    printf("\n\t\t\tMoi quy khach nhap ma pin \n");
    mapin();
    }while(tl);
    do{
        system("cls");
        printf("\n\t\t\t\tMoi quy khach chon");
        printf("\n\nphim 1: Rut tien\t\t\t\t\t");
        printf("phim 2: Thay doi ma pin\n\n\n\n");
        printf("phim 3: Thong tin so du tai khoan\t\t\t");
        printf("phim 4: Thoat\n\n\n\n");
        printf("=>chon phim ");
        fflush(stdin);
        tl = getchar();
        system("cls");
        switch(tl){
        case '1': Ruttien();      break;
        case '2': thaymapin();    break;
        case '3': taikhoan();     break;
        case '4': printf("\n\t\t\tCam on quy khach da su dung chuong trinh \n"); getch();  break;
        default : printf("\n\t\t\t Quy khach da chon sai phim.MOi Quy Khach Chon Lai \n\t\t\t\tXinTran Thanh Cam On\n\n");getch();  break;
        }
    }while (tl != '4');

}
