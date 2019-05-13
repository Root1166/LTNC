#include<stdio.h>
#include<conio.h>
int a,b,c;
void phuongtrinh()
{
    float x1,x2,delta;
     delta=b*b-4*a*c;
    x1=(-b-sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
        {
            if (delta<0)
                printf("phuong trinh vo nghiem");
            else if(delta=0)
                printf ("phuong trinh co nghiem kep x1=x2=%.3f",(float)(-b)/(2*a));
            else
            {
                printf("phuong trinh co hai nghiem phan biet x1 va x2\n");
                printf("\n\nx1=%.2f",x1);
                printf("\t\tx2=%.2f\n\n\n\n\n",x2);
            }
        }
}
main()
{
    printf("      CHUONG TRINH GIAI PHUONG TRINH BAC HAI AN X\n");
    printf("                 ax^2 + bx +c = 0\n");
    do
    {
    printf("nhap so a = ");     scanf("%d",&a);
    }
    while(a==0);
    {
    printf("nhap so b = ");     scanf("%d",&b);
    printf("nhap so c = ");     scanf("%d",&c);
    }
     phuongtrinh();


    getch();
}
