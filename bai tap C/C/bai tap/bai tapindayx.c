#include <stdio.h>
#include <conio.h>
 int day(int i,int j,int n)
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%2d",j);
        }
        printf("\n");
    }
    return (0);
}
int max(int a,int b)
{
    if(a>b)
    {
        printf("gia tri max = %d",a);
    }
    else
    {
        printf("gia tri max = %d",b);
    }
    return(0);
}

 void main()
{
    int n,i,j,a,b;
    printf ("nhap n = ");
    scanf("%d",&n);
    printf("\n",n,i,j,day(i,j,n));
    printf("\n");
    printf("nhap gia tri a = ");
    scanf("%d",&a);
    printf("nhap gia tri b = ");
    scanf("%d",&b);
    printf("\n",a,b,max(a,b));
}
