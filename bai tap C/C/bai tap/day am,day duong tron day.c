#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,a[20],day1,day2;
    printf ("nhap n = ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("\nnhap ca phan tu a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf ("\nday vua moi nhap la:\n");
     for(i=1;i<=n;i++)
        printf("%6d",a[i]);

    for (i=1;i<=n;i++)
    {
        if(a[i>0])
        {
            for(i=1;i<=n;i++)
                printf("%4d",a[i]);
                day1=a[i];
        }
        else
        {
            for(i=1;i<=n;i++)
            printf("%4d",a[i]);
            day2=a[i];
        }

    }
    printf("\nday duong la =%4d",day1);
    printf("\nday am la =%4d",day2);
    getch();
}
