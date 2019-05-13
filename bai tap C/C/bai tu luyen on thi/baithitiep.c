#include<conio.h>
#include<stdio.h>
void bai1()
{
    int a,b,c;
    printf("nhap a = ");
    scanf("%d",&a);
    printf("nhap b = ");
    scanf("%d",&b);
    printf("nhap c = ");
    scanf("%d",&c);
    if((a+b<c)||(a+c<b)||(b+c<a))
        printf("\nkhong toa thanh mot tam giac:\n");
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
        printf("\ntam giac do la tam giac vuong");
    else if ((a==b==c))
        printf("\ntam giac do la tam giac dieu");
    else if (((a==b)&&(a!=c)||((a==c)&&(a!=b)||((b==c)&&(b!=a)))))
        printf("tam gia do la tam giac can ");
    else if(((a*a+b*b==c*c)&&(a==b))||((a*a+c*c==b*b)&&(a==c))||((b*b+c*c==a*a)&&(b==c)))
        printf("tam gia do la tam giac vuong can.");
    else printf("tam giac do la tam giac thuong ahjhj");
    getch();
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


main()
{
    char tl;
    printf("\t\t\t************************\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**     Bui van cong   **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**      AT13CLC01     **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t************************\n");

     do{
        printf("\n\t\tphim 1: Chuong trinh xet tam giac:");
        printf("\n\t\tphim 2: Chuong trinh tinh tong giai thua:");
        printf("\n\t\tphim 3: Chuong trinh kiem tra so nguyen to:");
        printf("\n\t\tphim 4: Chuong trinh tinh trung binh cong mot so :");
        printf("\n\t\tphim 5: Chuong trinh tim  uoc chung lon nhat cua hai so");
        printf("\n\t\tphim 6: ket thuc:");
        printf("\n\t\t=>chon phim ");
        fflush(stdin);
        tl = getchar();
        switch(tl){
        case '1': bai1();  break;
        case '2': bai2();  break;
        case '3': bai3();  break;
        case '4': bai4();  break;
        case '5': bai5();  break;
        case '6':printf("\n\n\n\t\t Cam on quy khach dax su dung truong trinh.\n\t\t \tgoodbyte and see you again"); getch(); break;
        default : printf("\n\n\tQuy khach da nhap sai phim.Xin Quy khach thu lai:");
                getch();
                break;
        }

    }while(tl !='6');
}

