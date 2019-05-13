#include <stdio.h>
#include <conio.h>
int main()
{
    int n;


    printf("\t\t\t***********************\n");
    printf("\t\t\t*                     *\n");
    printf("\t\t\t*                     *\n");
    printf("\t\t\t*     bui van cong    *\n");
    printf("\t\t\t*                     *\n");
    printf("\t\t\t*                     *\n");
    printf("\t\t\t***********************\n");


    do
    {
        printf("\tbai 1:dien tich hinh vuong\n");
        printf("\tbai 2: dien tich hinh chu nhat\n");
        printf("\tbai 3: dien tich hinh tam giac\n");
        printf("\tbai 4:dien tich hinh thanh\n");
        printf("\tbai 5;dien tich hinh tron\n");
        printf("\t-----------thoat an 0------------\n");
        printf("\t-Moi ban chon :");
        scanf("%d",&n);
    switch(n)
    {
    case 1:{
    int a,s;
    printf("CHUONG TRINH TINH DIEN TICH HINH VUONG");
    printf("\nxin moi nhap canh hinh vuong=");
    scanf("%d",&a);

    {
        s=a*a;
    }
    printf("\ndien tich hinh vuong ma ban muon tim la=%d\n\n",s);
    break;
    }
     case 2:{
     int a,b,s;
     printf("CHUONG TRINH TINH DIEN TICH HINH CHU NHAT");
     printf("\nxin moi banj nhap chieu dai:");
     scanf("%d",&a);
     printf("xin moi ban nhap chieu rong:");
     scanf("%d",&b);
     {
         s=a*b;
     }
        printf("\ndien tich hinh chu nhat ma ban muon tim la:%d\n",s);
        break;
     }
     case 3:{
     int a,c,s;
     printf("CHUONG TRINH TINH DIEN TICH TAM GIAC\n");
     printf("\nxin hay cho biet chieu cao");
     scanf("%d",&a);
     printf("xin cho toi biet canh day");
     scanf("%d",&c);
     {
         s=a*c/2;
     }
     printf("\ndien tich tam giac ma ban muon tim la:%d\n\n",s);
     break;

     }
     case 4:{
        int a,b,c,s;
        printf("CHUONG TRINH TINH DIEN TICH HINH THANG\n");
        printf("\nxin cho toi biet canh day lon = ");
        scanf("%d",&a);
        printf("xim cho toi biet canh day nho = ");
        scanf("%d",&b);
        printf("xin cho toi biet chieu cao = ");
        scanf("%d",&c);
        {
            s=(a+b)*c/2;
        }
        printf("\ndien tich hinh thang ban muon tim la:%d\n\n",s);
        break;
     }
     case 5:{
    int r,s;
     printf("CHUONG TRINH TINH DIEN TICH HINH TRON\n");
     printf("xin cho toi biet ban kinh hinh tron = ");
     scanf("%d",&r);
     {
         s=2*3.14*r*r;
     }
     printf("\ndien tich hinh tron ma ban can tim la:%d\n\n",s);
     break;
     }
     case 0:break;
        default : printf("Moi ban nhap lai!!");
    }
    }while (n);
    return 0;
}
