#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,max=0,a[20],s=0,k=0;
    printf("nhap so phan tu day =");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nnhap a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nday vua moi nhap la\n");
    for (i=0;i<n;i++)
        printf("%3d",a[i]);
    //stast
    for(i=0;i<n;i++)
    {
        if (a[i]<0)
            break;
        if(a[i]>0)
        {
            s+=a[i];
            k++;
            if(a[i]>max)
                max=a[i];
        }
    }
    printf("\n\nphan tu am dau tien la thu %d\ va gia tri: %d ",i+1,a[i]);
    printf("\n\nso phan tu duong dau tien la %d",k);
    printf("\n\ntong so duong dau tien trong day=%d",s);
    printf("\n\ngia tri max duong dau tien trong day la:%d",max);


}
