#include<stdio.h>
#include<conio.h>
void uocso(a,b)
int a,b;
{
    int x,y;
    while(a-b)
            {
            if (a>b)
                a=a-b;
            else
                b=b-a;
            }
    printf("\nuoc chung lon nhat cua hai so la:%d",a);
}
main()
{
    int x,y;
    printf("     CHUONG TRINH TIM UOC CHUNG LON NHAT CUA HAI SO a VA b\n");
    printf("nhap so a = ");     scanf("%d",&x);
    printf("nhap so b = ");     scanf("%d",&y);
    uocso(x,y);
    getch();
}
