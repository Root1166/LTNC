#include<stdio.h>
#include<conio.h>
#define SIZE 30
int sapxep(int array[]);
int n;
main()
{
    int array[SIZE],i,j,temp;
    printf("nhap so phan tu cua day = ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("nhap array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("day vua moi nhap la:\n");
    for (i=1;i<=n;i++)
        printf("%6d",array[i]);
    getch();
    for (i=0;i<=n-1;i++)
        for (j=i+1;j<=n;j++)
    {
        if(array[i]>array[j])
        {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        }
    }
    printf("\n\n\nday xep xep theo chieu tang dan la:\n");
    for (i=0;i<n;i++)
    printf("%5d",array[i]);

    getch();
}



