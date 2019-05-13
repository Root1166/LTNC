#include<stdio.h>
#include<conio.h>
void nhap(int a[],int *n,char ten)
{
    int i;
    printf("nhap so phan tu cua day %c:"ten);
    scanf("%d",&n);
    for (i=0;i<*n;i++)
    {
        printf("nhap %c[%d]= "ten);
        scanf("%d",a[i]);
    }
}
void in_day(int )
