#include<stdio.h>
#include<conio.h>
void chuvi(int r)
{
    int s;
    s=6.18*r;
    printf("\nvoi r = %d",r);
    printf("\nthi chu vi hinh vuong la:%d ",s);

}
void dientich(int r)
{
    int s;
    s =3.14*r*r;
    printf("\nvoi r = %d",r);
    printf("\nthi dien tich hinh vuong la:%d",s);
}

main()
{
    int r;
    printf("sinh vien:Bui Van Cong\nLop: AT13CLC01");
    printf("\nCHUONG TRINH TINH CHU VI VA DIEN TICH HINH TRON \n");
    printf("xin moi ban nhap r = ");
    scanf("%d",&r);
    chuvi(r);
    dientich(r);
    getch();
}
