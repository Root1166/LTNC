#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,i,j,tong;
    printf("nhap so hang:%d")
    scanf("%d",&n);
    printf("nhap so cot :%d")
    scanf("%d",&m)
    int a[n][m],b[n][m],c[n][m];
    printf("nhap gia tri cua phan tu  trong ma tran A <%d*%d>:\n\n",n,m);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",a[i][j]);
        }

    }
}
