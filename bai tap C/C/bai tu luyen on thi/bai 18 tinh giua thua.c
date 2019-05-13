#include<stdio.h>
#include<conio.h>
long   gt(int n)
{
    int s=1,i;
    if (n==0||n==1)
        return(1);
    else
        return(n*gt(n-1));
}
    main()
{
    int n;
    tt:printf("nhap gia tri n = ");
    scanf("%d",&n);
    printf("gia tri cua %d! = %ld\n",n,gt(n));
    printf("\ntiep/dung nhap(1/0)");
    scanf("%d",&n);
    if (n==1)
        goto tt;
    long gt(n);
    getch();

}
