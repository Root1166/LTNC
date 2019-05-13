#include<stdio.h>
#include<conio.h>
int main()
{
    double n,i;
    int k;
    printf("\t\tCHUONG TRINH TINH CAN BAC 2 CUA MOT SO\n");
    tt:printf("nhap so can tinh : ");
    scanf("%lf",&n);
    {
        if (n>0)
            goto tinh;
        else
            printf("\nkhong the tinh can ba 2 cua so am");
            goto tt;
    }
    tinh:printf("\nNeu a = %2.0f thi can bac 2 cua a = %.3f",n,sqrt(n));
    printf("\ntiep/dung(1/0)");
    scanf("%d",&k);
    if(k==1)
    goto tt;


}
