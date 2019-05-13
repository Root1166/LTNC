#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,UCLN,BCNN,luu,B;
    long p;
    printf("nhap so a = ");
    scanf("%d",&a);
    printf("nhap so b = ");
    scanf("%d",&b);
    luu=a;
    B=b;
    p =(long)a*b;
    while(a-b)
    {
        if (a>b)
            a=a-b;
        else
            b=b-a;

    }
    printf("UOC CHUNG LON NHAT CUA %d VA %d LA:%d",luu,B,a);
    printf("\nBoi so chung nho nhat la :%d",p/a);
    getch();
}
