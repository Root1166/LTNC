#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,s=0;
    printf("nhap n = ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s+=(i*i);
    }
    printf("gia tri cua tong :%d",s);
    getch();
}
