#include <stdio.h>
#include <conio.h>

int main()
{
    int ma,k;
    tt:printf("nhap ma truong ban muon tim: ");
    scanf("%d",&ma);
    {
    if(ma==1)
        printf("\nDai Hoc Tai Chinh:\n279 Nguyen Chi Phuong\nQuan 10 HaNoi");
    else if(ma==2)
        printf("\nDai Hoc Kinh Te:\n59c Nguyen Dinh Chieu.\nQuan 3 HaNoi");
    else if (ma==3)
        printf ("\nDai Hoc Tong Hop:\n227 Nguyen Van Cu.\nQuan 5 HaNoi");
    else if (ma==4)
        printf ("\nDai Hoc Bach Khoa:\n268 Ly Thuong Kiet.\nQuan 10 HaNoi");
    else if(ma==5)
        printf ("\nDai Hoc Su Pham:\n280 An Duong Vuong.\nQuan5 HaNoi");
    else
        printf ("\nGo sai ma ");
    }
    printf ("\n\ntiep tuc hoa dung (1/0)");
    scanf("%d",&k);
    if (k==1)
        goto tt;
}
