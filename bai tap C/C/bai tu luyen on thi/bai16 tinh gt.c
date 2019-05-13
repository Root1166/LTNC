#include<stdio.h>
#include<conio.h>
long double gt (int i);
main()
{
    int i,n;
    float p;
    printf("nhap gia tri cua n = ");
    scanf("%d",&n);
    p=1;
    for (i=0;i<n;i++)
        ;
    p=p*gt(i);
    printf("giai thua cua %d=%11.9f",n,p);
    getch();
}
long double gt(int i)
{
    long double tam;
    int k;
    tam =1;
    for(k=1;k<i;k++)
            tam =tam *k;
    return(tam);






}
