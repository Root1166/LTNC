#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    float delta,x1,x2;
    printf ("\t\tCHUONG TRINH TINH PHUONG TRINH BAC HAI AN X\n");
    printf("\t\t\t     ax^2 + bx +c = 0\n");
    do{
        printf ("nhap a = ");
        scanf("%d",&a);

    }
    while(a==0);
        printf("nhap b = ");
        scanf("%d",&b);
        printf("nhap c = ");
        scanf("%d",&c);
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
                printf("x1=%.2f",x1);
                printf("\nx2=%.2f",x2);
            }
        }

        getch();
}
