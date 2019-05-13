#include <stdio.h>
#include<conio.h>
main()
{
    int n,tuoi,k;
    tt:printf("nhap nam ban sinh  = ");
    scanf("%d",&n);
    {
        tuoi= 2017 - n;

    }
    printf("ban sinh nam %d vay nam nay ban %d tuoi",n,tuoi);
    getch();
    printf("\ntiep tuc hay khong 1/0 chon ");
    scanf("%d",&k);
    if (k =='1')
        goto tt;




}
