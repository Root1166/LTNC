#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k=0,array[20];
    float max=0,s=0;
    tt:printf("nhap n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nnhap phan tu day array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("\nday ban vua moi nhap la:\n\n");
     for (i=1;i<=n;i++)
        printf("%6d",array[i]);
     for(i=1;i<=n;i++)
     {
         if(array[i]<0)
            continue;
            s+=array[i];
         if (array[i]>max)
            max=array[i];
         if(array[i]>0)
            k++;
     }
     printf("\n\nso duong trong day = %d",k);
     printf("\n\ntong so duong trong day= %6.0f",s);
     printf("\n\ngia tri max = %6.0f",max);
     printf("\nbam co muon xem nam khac\nxin moi ban nhap(1/0)");
     scanf("%d",&k);
     if(k==1)
     goto tt;
     getch();
}
