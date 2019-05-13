#include<stdio.h>
#include<conio.h>
int a[100];
void tao()
{
    int i,n;
    printf("nhap so phan tu cua day = ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("nhap array[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("day vua moi nhap la:\n");
    for (i=1;i<=n;i++)
        printf("%6d",a[i]);
        getch();

}
void tim()
{
    int x,k;
    printf("\nnhap gia tri cua x =  ");    scanf("%d",&x);
    for(k=0;k<999;k++)
        if(a[k] + a[k+1]==x)
            printf("a[%d] + [%d] = %d\n",k,k+1,x);
 printf("\n\t\tDanh sach sinh vien trung tuyen \n");
    printf("\n\t Bui van Cong");
    printf("\t\t\t AT13CLC01\n");
    puts("ket thuc");

}
main()
{
    tao();
    tim();
    getch();
}
