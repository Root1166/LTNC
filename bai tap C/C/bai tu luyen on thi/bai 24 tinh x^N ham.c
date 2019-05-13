#include<stdio.h>
#include<conio.h>
double x,n;
void luythua()
{
    double s,pow();
    s=pow(x,n);
    printf("\n\t\tKET QUA TRA VE CUA X^N:\n\n");
    printf("\n\t\tvoi X = %5.0lf\n",x);
    printf("\n\t\tvoi N = %5.0lf",n);
    printf("\n\nthi gia ket qua cua x^n la = %8.0lf",s);
}
main()
{
    printf("                TRUONG TRINH TINH LUY THUA X\n");
    printf("                             X^n        ");
    printf("\nnhap gia tri cua x = ");      scanf("%lf",&x);
    printf("nhap gia tri cu mu n = ");      scanf("%lf",&n);
    luythua();
    getch();
}
