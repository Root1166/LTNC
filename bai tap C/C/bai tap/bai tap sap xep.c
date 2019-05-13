#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,j;
    float td,day[10];
    printf("nhap gia tri cua day n=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("nhap gia tri trong day [%d] =",i);
        scanf("%f",&day[i]);
    }
    printf("\nday vua moi nhap la =");
    for (i=0;i<n;i++)
        printf("%6.0f",day[i]);
   {
    for (i=0;i<=n;i++)
        for(j=i+1;j<=n-1;j++)
        {
           if (day[i]>day[j])
           {
               td=day[i];
               day[i]=day[j];
               day[j]=td;
           }
        }
    printf("\n\n\nday duoc sap xep theo chieu tang dan la");
    for (i=0;i<n;i++)
        printf ("%6.0f",day[i]);
        printf("\n\n\n\n");
   }
}
