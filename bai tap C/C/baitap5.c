#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>
int a[30],b[30],c[30],i;
main()
{
    printf("\nmang a = ");
    for(i=0;i<30;i++)
        a[i] = 3*i + 5;
    printf("\nDa tao song mang a ");
    printf("\nBam phim bat ky de gan mang a cho mang b\n");
    getch();
    memmove(b,a,sizeof(a));
    for(i=0;i<30;i++)
    printf("Ta co a[%d] = %2d va b[%d] = %2d ",i,a[i],b[i]);
    printf("\nDa gan xonh.Bam phem bat ky de \n");
    printf("chep tu phan tu cua mang a sang mang c\n");
    getch();
    memove(c,a+4,sizeof(a));
    for(i=0;i<30-4;i++)
    printf("Ta co a[%d] = %2d  va c[%d] = %2d",i,a[i],c[i]);
    printf(" \nHay de y ket qua de hieu duoc cach gan gia tri cua mang\n");



    getch();


}








