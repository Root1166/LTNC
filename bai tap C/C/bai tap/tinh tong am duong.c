#include <stdio.h>
#include <conio.h>
int main()
{
    int a[20],i,n,m,sum=0,suml=0;
    printf ("nhap  n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("nhap phan tu a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nday so vua moi nhap la:\n");
    for(i=1;i<=n;i++)
        printf("%6d",a[i]);
    for (i=1;i<=n;i++)
    {
        if(a[i]>0)
            sum+=a[i];
        else
            suml+=a[i];
    }

    printf ("\ngia tri cua tong cac so duong =%d ",sum);
    printf ("\n\ngia tri cua tong cac so am =%d ",suml);
    getch();






}
