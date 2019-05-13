#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i=1,s=0,k;
    tt:printf("tinh tong binh phuong cac so nguyen:");
    scanf("%d",&n);
    while(i<=n)
    {
        s+=(i*i);
        i++;
    }
    printf("gia tri cua tong binh phuong cac so la:%d",s);
    printf("\nmuon tinh tiep/dung xin moi chon(1/0)");
    scanf("%d",&k);
    if(k==1)
        goto tt;
    getch();
}
