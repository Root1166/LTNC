#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,j;
    float a[30],max;
    printf ("nhap n = ");
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("\nnhap phan tu a[%d]= ",i);
        scanf ("%f",&a[i]);
    }
    max = a[0];
    for (i=0;i<n;i++)
        if (a[i]>max)     max=a[i];
        printf ("day so vua nhap:\n");
        for(i=0;i<n;i++)
            printf("%3.0f",a[i]);
    printf("\ngia tri max =%.0f",max);

getch();

}
