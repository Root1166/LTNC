#include<stdio.h>
#include<conio.h>
long double giaithua(int i)
{
    long double tong;
    int k;
    tong =1;
    for(k=1;k<=i;k++)
        tong=tong * k;
    return (tong);
}
main()
{
    int n,i;
    float s;
    printf("           CHUONG TRINH TINH TONG NGICH DAO CUA N GIA THUA DAU TIEN \n");
    printf("                            1+1/2!+1/3!+.....+1/n!");
    printf("\nnhap gia tri cua n = ");
    scanf("%d",&n);
        s=0;
    for (i=1;i<=n;i++)
        s=s + 1/giaithua(i);
        giaithua(i);
        printf("tong nghich dao cua giai thua %d = %11.2f\n\n",n,s);
    getch();


}
