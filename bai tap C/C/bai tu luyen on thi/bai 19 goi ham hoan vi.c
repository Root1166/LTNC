#include<stdio.h>
#include<conio.h>
void hoanvi(int *a,int *b)
{
    int tems;
    tems=*a;
    *a=*b;
    *b=tems;
}
main()
{
    int a,b;
    printf("nhap so thu nhat = "); scanf("%d",&a);
    printf("nhap so thu hai = "); scanf("%d",&b);
    hoanvi(&a,&b);
    printf("\nsau khi hoan vi:\nso thu nhat la:%d",a);
    printf("\ncon so thu hai la :%d",b);
    getch();


}
