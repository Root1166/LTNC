#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],b[20],n,i,j,k,c;
    printf("nhap n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("nhap phan tu thu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nDay so ban vua nhap la\n");
    for(i=0;i<n;i++)
        printf("%6d",a[i]);
    // sawp xep tang dan;
    for(i=2;i<n;i++)
    if (a[i]%2==0){
        for(j=i;j<n;j++);
        printf("%4d",a[i]);

    }else{
        for(j=i;j<n;j++);
        printf("%4d",a[i]);
    }


    getch();

}
