#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i;
    printf("nhap gia tri cua n = ");
    scanf("%d",&n);
    int s = 0.0;
    for(i=1;i<=n;++i)
        s+= (i+1)/(i);
    printf("gia tri cua S= %5.2d",s);
    getch();
}
