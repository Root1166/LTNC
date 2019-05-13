#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <String.h>
void bai1()
{






}
void bai2()
{








}
void bai3()
{




}
void bai4()
{








}

void bai5()
{









}
void bai6()
{





}
void bai7()
{



}
 int main()
 {
     char tl;
     printf("               Bui Van Cong  ");
     printf("                AT13CLC01    ");
     do
     {
         printf("\n\tMENU:\n");
         printf("\n\t\tphim 1: Chuong trinh gia he phuong trinh tuyen tinh bac nhat hai an:");
         printf("\n\t\tphim 2: Chuong trinh tinh nhap mot so nguyen duong sau do in ra chu:");
         printf("\n\t\tphim 3: Chuong trinh tim gia tri max  trong day so :");
         printf("\n\t\tphim 4: Chuong trinh tim gia tri min trong day so :");
         printf("\n\t\tphim 5: Chuong trinh tong so duong am tron day so :");
         printf("\n\t\tphim 6: Chuong trinh tinh trunng binh cong  cac so am,so duong trong day so:");
         printf("\n\t\tphim 7: Chuong trinh nhap hai day tang dan roi gop hai day sau thanh mot ui cung tang dan:");
         printf("\n\t\tphim 8: Ket thuc:");
         printf("\n\t\t=> chon phim: ");
         fflush(stdin);
         tl = getchar();
         switch(tl){
            case '1' : bai1();   break:
            case '2' : bai2();   break;
            case '3' : bai3();   break;
            case '4' : bai4();   break;
            case '5' : bai5();   break;
            case '6' : bai6();   break;
            case '7' : bai7();   break;
            case '8' : printf("\n\t\tCam on quy khach da su dung truong trinh\n"); getch(); break;
            default  : printf ("\n\t\t phim ban chon khong dung vui long thu lai \n");
                    getch():
                    break;
         }
     }while(tl != '8');
 }
