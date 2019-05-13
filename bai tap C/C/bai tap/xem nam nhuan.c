#include<stdio.h>
#include<conio.h>
int main()
{
    int nam,k;
    printf("\t\t\tDaY LA CHUONG TRINH XEM NAM NHUAN\n\n");
    tt:printf("\nxin moi ban nhap nam can xem:");
    scanf("%d",&nam);
    switch(nam %4)
    {
        case 0: printf("\nNam %4d",nam);
                printf("\nLa Nam Nhuan");
                break;
        case 1: printf("\nNam ngoai %4d",nam-1);
                printf("\n Moi La Nam Nhuan");
                break;
        case 2: printf("\nNam kia %4d",nam-2);
                printf("\n Moi La Nam Nhuan");
                break;
        default:printf("\nSang Nam %4d",nam+1);
                printf("\n Moi La Nam Nhuan");
                break;
    }
    printf("\n\nbam co muon xem nam khac\nxin moi ban nhap tiep/dung(1/0)");
    scanf("%d",&k);
    if(k==1)
        goto tt;

    getch();
}
